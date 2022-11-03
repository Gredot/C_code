//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int len = sizeof(arr) / sizeof(arr[0]) - 1;
//	for (int i = 0; i <= len; i++)
//	{
//		for (int j = 0; j < len - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < len + 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n[3], t, j, k;
	for (t = 0; t < 2; t++)
		n[t] = 0;
	k = 2;
	for (t = 0; t < k; t++)
		for (j = 0; j < 3; j++)
			n[j] = n[t] + 1;
	printf("%d", n[1]);
		return 0;
}