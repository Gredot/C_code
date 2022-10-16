#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main () 
{
	int arr[10] = {9,2,7,1,5,3,4,6,8,10};
	int len = sizeof(arr) / sizeof(arr[0]) - 1;
	for (int i = 0; i <= len; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (arr[j]>arr[j+1])

			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < len + 1; i++)
	{
		printf("%d\n",arr[i]);
	}

	return 0;
}