#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main ()
{
	int door[210];
	int N;
	scanf("%d", &N);
	//����N��
	for (int i = 1;i<=N;i++)
	{
		//��1-N�ı������в���
		//1�ı���  1-N	  An = ��An-1�� + 1
		//2�ı���  2 4 6  An = ��An-1�� + 2
		//3�ı���  3 6 9  An = ��An-1�� + 3
		for (int j = i;j<=2*N;j+=i)
		{		
			//�Է��ϵ��ŵ�״̬�����෴����
			door[j] = !door[j];
		}
	}
	int count = 0;
	for (int i = 1; i <= 2 * N; i++)
	{    //�Դ򿪵��Ž��м���
		if (door[i])
			count++;
	}
	printf("%d",count);
	return 0;
}  
