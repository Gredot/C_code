#include<stdio.h>
const int MAXN = 10000 + 5;
int board[MAXN][MAXN] = { 0 };
int main()
{
	int flg = -1;
	//地毯数 
	int n = 0;
	scanf("%d", &n);
	//地毯规格信息 
	int arr[n][4];//该处改成[n][4]即可，vs不支持c99
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//需判断坐标
	int dx = 0;
	int dy = 0;
	scanf("%d %d", &dx, &dy);
	//处理地毯规格信息 
	for (int i = 0; i < n; i++)
	{
		//拿到地毯起始坐标 
		int  x = arr[i][0];
		int  y = arr[i][1];
		int cx = arr[i][2];
		int cy = arr[i][3];
		if (dx >= x && dy >= y && dx <= cx + x && dy <= cy + y)
			flg = i + 1;
	}
	printf("%d", flg);

	return 0;
}