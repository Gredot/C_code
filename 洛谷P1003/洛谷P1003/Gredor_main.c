#include<stdio.h>
const int MAXN = 10000 + 5;
int board[MAXN][MAXN] = { 0 };
int main()
{
	int flg = -1;
	//��̺�� 
	int n = 0;
	scanf("%d", &n);
	//��̺�����Ϣ 
	int arr[n][4];//�ô��ĳ�[n][4]���ɣ�vs��֧��c99
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//���ж�����
	int dx = 0;
	int dy = 0;
	scanf("%d %d", &dx, &dy);
	//�����̺�����Ϣ 
	for (int i = 0; i < n; i++)
	{
		//�õ���̺��ʼ���� 
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