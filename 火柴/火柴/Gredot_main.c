#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
		//Key:		//f(a)+f(b)+f(c) +4 = num;
					//F(A,B,C)=0;
					//A+B=C
		//��Ŀ���� https://www.luogu.com.cn/problem/P1149
int main ()
{
	//��Ż��ƴ�ɶ�Ӧ�������������   �±��������
	int match[2001] = { 6,2,5,5,4,5,6,3,7,6};
	// ������cnt
	int cnt = 0;
	//�����������
	int m_num;
	scanf("%d", &m_num);
	for (int i = 10; i<=2000; i++)
	{
		if (i < 100)
		{
			match[i] = match[i % 10] + match[i / 10];
		}
		else if (i >= 100 && i < 10000)
		{ 
			match[i] = match[i % 10] + match[i / 10 % 10] + match[i / 1000];
		}
	}
				//A+B=C
		for (int i = 0; i <=1000; i++)
		{
			for (int j = 0; j <= 1000; j++)
			{
				if (match[i] + match[j] + match[i + j] + 4 == m_num)
				{
					printf("%d+%d=%d\n", i, j, i + j);
					cnt++;
				}
			}
		}
	printf("%d", cnt);
		return 0;
} 
