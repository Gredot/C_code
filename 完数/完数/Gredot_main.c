#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0, i = 0, sum;
	for (n = 2; n < 1000; n++)
	{
		sum = 0;
		for (i = 1; i < n; i++)
		{
			if (n % i == 0)//找出n的所有因子
			{
				sum += i; // 所有因子求和
			}
		}
		if (sum == n)   //因子的和等于该数  
			printf("%d 是完数 ", n);
	}
	return 0;
}
