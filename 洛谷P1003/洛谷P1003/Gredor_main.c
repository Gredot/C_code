#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int board[100][100] = { 0 };
	//��̺�� 
	int n = 0;
	scanf_s("%d", &n);
	//��̺�����Ϣ 
	int arr[3][4];//�ô��ĳ�[n][4]���ɣ�vs��֧��c99
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
			scanf_s("%d", &arr[i][j]);
	}
	//���ж�����
	int dx = 0;
	int dy = 0;
	scanf_s("%d %d", &dx, &dy);
	//�����̺�����Ϣ 
	for (int i = 0; i < n; i++)
	{
		//�õ���̺��ʼ���� 
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