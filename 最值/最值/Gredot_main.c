#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main ()
{
	int arr[10],i,max,min;
	//从键盘给数组初始化
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//
	max = min = arr[0];
	for (i = 0; i < 10; i++)
	{
		
			if (arr[i] >max)
			{
				max =  arr[i];
			}
			if (arr[i] <min)
			{
				min = arr[i];
			}
	}
	printf("max = %d,min = %d", max, min);
		return 0;
}