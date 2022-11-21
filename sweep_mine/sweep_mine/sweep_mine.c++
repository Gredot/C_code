#include"game.h"
//计数器，用来记录打开的格子的数量
int cnt = 0;

bool isOver = false; 
int main ()
{
	//创建图像窗口
	initgraph(COL*IMGW,ROW*IMGW);

	//设置随机数种子
	srand((unsigned int)time(NULL));

	//定义游戏地图
	int map[ROW][COL] = { 0 };
	//初始化数据
	initMap(map);
	//把数据转成对应的图形界面
	IMAGE img[12];//定义图片数组
	//加载图片
	for (int i = 0; i < 12; i++)
	{
		char fileName[50] = { 0 };
		sprintf(fileName, "./images/%d.jpg", i);
		loadimage(img + i, fileName, IMGW, IMGW);
	}

	//把数组里面的数据转换成对应的图片，贴图贴到图形窗口上
	while(true)
	{
		mouseEvent(map, img);
		drawMap(map, img);
		if (isOver)
		{
			int ret =MessageBox(GetHWnd(), "你踩到雷了，再来一把？", "提示：", MB_OKCANCEL);
			if (ret == IDOK)
			{
				initMap(map);
				showMap(map);
				isOver = false;
			}
			else if(ret == IDCANCEL)
			{
				exit(666);
			}
		}
	}
	//显示地图
	showMap(map);
	return 0;
}