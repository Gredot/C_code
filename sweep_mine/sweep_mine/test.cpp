#include"game.h"
//�����ⲿ����
extern int cnt;
extern bool isOver;
//��ʾ��ͼ�����ݣ�+
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
//��ʼ����ͼ
void initMap(int map[ROW][COL])
{
	//ÿ����Ϸǰ����map  ����0��
	 cnt = 0;
	memset(map, 0, ROW * COL * sizeof(int));
	//����ͼ��������ף�����-1��ʾ
	for (int i = 0; i < 10; )
	{
		int r = rand() % 10;  //[0,10)
		int c = rand() % 10;
		//���Ⲽ���׵�������ͬ��ȥ�أ�
		if (map[r][c] == 0)
		{
			map[r][c] = -1;
			i++;
		}
	}

	//�����ڵľŹ������еĸ��ӵ���ֵ��һ  ���׳��⣩  ������ͼ
	for (int i = 0; i < ROW; i++)
	{
		for (int k = 0; k < COL; k++)
		{
			//���������ڵľŹ���
			if (map[i][k] == -1)
			{
				for (int r = i - 1; r <= i + 1; r++)
				{
					for (int c = k - 1; c <= k + 1; c++)
					{
						//�߽�Ź�����ܻ�Խ��(����Խ������)
						if ((c >= 0 && c < ROW) && (r >= 0 && r < COL) && (map[r][c] != -1))
						{
							map[r][c]++;
						}
					}
				}
			}
		}
	}
	//�����еĸ���������ͼ����������ÿ�����Ӷ��Ӹ��ܣ�+20
	for (int i = 0; i < ROW; i++)
	{
		for (int k = 0; k < COL; k++)
		{
			map[i][k] += 20;
		}
	}
}
//���Ƶ�ͼ����ͼ��
void drawMap(int map[ROW][COL], IMAGE img[])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int k = 0; k < COL; k++)
		{
			//�հ׸��Ӻ�����
			if (map[i][k] >= 0 && map[i][k] <= 8)
			{
				putimage(k * IMGW, i * IMGW, img + map[i][k]);

			}//��
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
//�������Ӧ
void mouseEvent(int map[ROW][COL], IMAGE img[])
{
	//������Ϣ�ṹ�壨��꣬�������ַ���Ϣ��
	ExMessage msg;
	if (peekmessage(&msg, EX_MOUSE))
	{
		//����������ת��������±�
		int r = msg.y / IMGW;
		int c = msg.x / IMGW;
		if (msg.message == WM_LBUTTONDOWN)//�������
		{
			if (map[r][c] >= 19 && map[r][c] <= 28)
			{
				map[r][c] -= 20;
				openNull(map, r, c);
				judge(map, r, c);
				showMap(map);
			}
		}
		if (msg.message == WM_RBUTTONDOWN)//�����Ҽ�
		{
			if (map[r][c] >= 19 && map[r][c] <= 28) //����
			{
				map[r][c] += 20;
			}
			else if (map[r][c] > 30)//ȡ������
			{
				map[r][c] -= 20;
			}
		}
	}
}
//չ����Χ���������ݹ飩
void openNull(int map[ROW][COL], int row, int col)
{
	//�жϵ�ǰ������ǲ��ǿհ�
	if (map[row][col] == 0)
	{		//�����Ź���   �ݹ�չ��
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
//�ж���Ϸ�Ƿ����
void judge(int map[ROW][COL], int row, int col)
{
	//����㵽���ף���game over��һ���ף��������׶���ʾ����
	if (map[row][col] == -1)
	{
		for (int i = 0; i < ROW; i++)
		{
			for (int k = 0; k < COL; k++)
			{
				if (map[i][k] == 19)
				{
					map[i][k] -= 20;//  ����ֱ�Ӹ�ֵ��-1���ף�
				}
			}
		}
		isOver = true;
	}
	//������ͼ��ͳ�ƴ򿪹��ĸ�������
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
		int isok = MessageBox(GetHWnd(), "��ϲ�㣬��ʤ��������һ��?", "��ʾ��", MB_OKCANCEL);
		if (isok == IDOK)
		{
			initMap(map);
			showMap(map);
			isOver = false;
		}
		else
		{
			exit(666);//�˳�����
		}
	}
}