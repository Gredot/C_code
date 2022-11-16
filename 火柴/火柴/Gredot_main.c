#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
		//Key:		//f(a)+f(b)+f(c) +4 = num;
					//F(A,B,C)=0;
					//A+B=C
		//题目链接 https://www.luogu.com.cn/problem/P1149
int main ()
{
	//存放火柴拼成对应数字所需的数量   下标代表数字
	int match[2001] = { 6,2,5,5,4,5,6,3,7,6};
	// 计数器cnt
	int cnt = 0;
	//输入火柴的数量
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
