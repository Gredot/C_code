#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int board[100][100] = { 0 };
	//地毯数 
	int n = 0;
	scanf_s("%d", &n);
	//地毯规格信息 
	int arr[3][4];//该处改成[n][4]即可，vs不支持c99
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
			scanf_s("%d", &arr[i][j]);
	}
	//需判断坐标
	int dx = 0;
	int dy = 0;
	scanf_s("%d %d", &dx, &dy);
	//处理地毯规格信息 
	for (int i = 0; i < n; i++)
	{
		//拿到地毯起始坐标 
		int  x = arr[i][0];
		int  y = arr[i][1];
		int cx = arr[i][2];
		int cy = arr[i][3];
		for (int j = x; j < cx; j++)
		{
			for (int k = y; k < cy; k++)
			{
				board[j][k] = i + 1;
			}
		}
	}
	int flg = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i == board[dx][dy])
		{
			printf("%d", i);
			flg++;
		}
	}
	if (0 == flg)
	{
		printf("-1");
	}

	return 0;
}