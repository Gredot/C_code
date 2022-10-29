#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int s = 0;
	int m[10] = {0};
	int n;
	scanf("%d%d", &n, &s);
	int arr[13] = {1,2,3,4,5,6,7,7,8,9,10,11,11};
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			if (s == arr[i] + arr[j])
			{
				printf("%d %d\n", arr[i], arr[j]);
				m[i] = arr[i] * arr[j];
				//将两数乘积存入数组m中   输出数组中（除了0以外）的最小值
			}
		}
	}
	int len = sizeof(arr) / sizeof(arr[0]) - 1;

	for (int i = 0; i <= len; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	if (0 == m[0])
	{
		for (int i = 0; i < 10; i++)
		{
			if (m[i] > 0)
			{
				printf("%d", m[i]);
				break;
			}
		}
	}
	else
	{
		printf("%d", m[0]);
	}
	return 0;
}