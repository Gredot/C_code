#include"game.h"
//声明外部变量
extern int cnt;
extern bool isOver;
//显示地图（数据）+
void showMap(int map[ROW][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int k = 0; k < COL; k++)
		{
			printf("%2d ", map[i][k]);
		}
		printf("\n");
	}
	printf("\n");
}
//初始化地图
void initMap(int map[ROW][COL])
{
	//每次游戏前重置map  （置0）
	 cnt = 0;
	memset(map, 0, ROW * COL * sizeof(int));
	//给地图里随机埋雷，雷用-1表示
	for (int i = 0; i < 10; )
	{
		int r = rand() % 10;  //[0,10)
		int c = rand() % 10;
		//避免布置雷的坐标相同（去重）
		if (map[r][c] == 0)
		{
			map[r][c] = -1;
			i++;
		}
	}

	//雷所在的九宫格所有的格子的数值加一  （雷除外）  遍历地图
	for (int i = 0; i < ROW; i++)
	{
		for (int k = 0; k < COL; k++)
		{
			//遍历雷所在的九宫格
			if (map[i][k] == -1)
			{
				for (int r = i - 1; r <= i + 1; r++)
				{
					for (int c = k - 1; c <= k + 1; c++)
					{
						//边界九宫格可能会越界(数组越界问题)
						if ((c >= 0 && c < ROW) && (r >= 0 && r < COL) && (map[r][c] != -1))
						{
							map[r][c]++;
						}
					}
				}
			}
		}
	}
	//把所有的格子用遮罩图盖起来，给每个格子都加个密，+20
	for (int i = 0; i < ROW; i++)
	{
		for (int k = 0; k < COL; k++)
		{
			map[i][k] += 20;
		}
	}
}
//绘制地图（贴图）
void drawMap(int map[ROW][COL], IMAGE img[])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int k = 0; k < COL; k++)
		{
			//空白格子和数字
			if (map[i][k] >= 0 && map[i][k] <= 8)
			{
				putimage(k * IMGW, i * IMGW, img + map[i][k]);

			}//雷
			else if (map[i][k] == -1)
			{
				putimage(k * IMGW, i * IMGW, img + 9);
			}
			else if (map[i][k] >= 19 && map[i][k] <= 28)
			{
				putimage(k * IMGW, i * IMGW, img + 10);
			}
			else if (map[i][k] > 30)
			{
				putimage(k * IMGW, i * IMGW, img + 11);
			}
		}
	}
}
//鼠标点击响应
void mouseEvent(int map[ROW][COL], IMAGE img[])
{
	//定义消息结构体（鼠标，按键，字符消息）
	ExMessage msg;
	if (peekmessage(&msg, EX_MOUSE))
	{
		//把鼠标的坐标转成数组的下标
		int r = msg.y / IMGW;
		int c = msg.x / IMGW;
		if (msg.message == WM_LBUTTONDOWN)//按下左键
		{
			if (map[r][c] >= 19 && map[r][c] <= 28)
			{
				map[r][c] -= 20;
				openNull(map, r, c);
				judge(map, r, c);
				showMap(map);
			}
		}
		if (msg.message == WM_RBUTTONDOWN)//按下右键
		{
			if (map[r][c] >= 19 && map[r][c] <= 28) //插旗
			{
				map[r][c] += 20;
			}
			else if (map[r][c] > 30)//取消插旗
			{
				map[r][c] -= 20;
			}
		}
	}
}
//展开周围非雷区（递归）
void openNull(int map[ROW][COL], int row, int col)
{
	//判断当前点击的是不是空白
	if (map[row][col] == 0)
	{		//遍历九宫格   递归展开
		for (int i = row - 1; i <= row + 1; i++)
		{
			for (int k = col - 1; k <= col + 1; k++)
			{
				if ((i >= 0 && i < ROW) && (k >= 0 && k < COL) && map[i][k] >= 19 && map[i][k] <= 28)
				{
					map[i][k] -= 20;
					openNull(map, i, k);
				}
			}
		}
	}
}
//判断游戏是否结束
void judge(int map[ROW][COL], int row, int col)
{
	//如果点到了雷，就game over点一个雷，其他的雷都显示出来
	if (map[row][col] == -1)
	{
		for (int i = 0; i < ROW; i++)
		{
			for (int k = 0; k < COL; k++)
			{
				if (map[i][k] == 19)
				{
					map[i][k] -= 20;//  或者直接赋值成-1（雷）
				}
			}
		}
		isOver = true;
	}
	//遍历地图，统计打开过的格子数量
	int cnt = 0;
	for (int i = 0; i < ROW; i++)
	{
		for (int k = 0; k < COL; k++)
		{
			if (map[i][k] <= 8 && map[i][k] >= 0)
				cnt++;
		}
	}

	if (cnt == ROW*COL-10)
	{
		int isok = MessageBox(GetHWnd(), "恭喜你，获胜啦，再来一把?", "提示：", MB_OKCANCEL);
		if (isok == IDOK)
		{
			initMap(map);
			showMap(map);
			isOver = false;
		}
		else
		{
			exit(666);//退出程序
		}
	}
}