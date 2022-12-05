#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int F_high[10] = { 0 };
	for (int i = 0; i < 10; i++)
		scanf("%d",&F_high[i]);
	int Max_high = 0;
	scanf("%d",&Max_high);  
	
	int cnt = 0;//¼ÆÊýÆ÷
	for (int i = 0; i < 10; i++)
	{
		if (F_high[i] <=30+ Max_high)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}