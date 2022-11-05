#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 10
// 交换数组
	int main()
	{
		int arr1[N] = { 0 };
		int arr2[N] = { 0 };
		int i = 0;


		printf("请输入10个数字:>");
		for (i = 0; i < 10; i++)
		{
			scanf("%d", &arr1[i]);
		}
		printf("请输入10个数字:>");
		for (i = 0; i < 10; i++)
		{
			scanf("%d", &arr2[i]);
		}
		//交换
		for (i = 0; i < 10; i++)
		{
			int tmp = arr1[i];
			arr1[i] = arr2[i];
			arr2[i] = tmp;
		}
    return 0;
}
	void Init(int arr[], int sz, int set)
	{
		int i = 0;
		for (i = 0; i < sz; i++)
		{
			arr[i] = set;
		}
	}


	void Print(int arr[], int sz)
	{
		int i = 0;
		for (i = 0; i < sz; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}


	void Reverse(int arr[], int sz)
	{
		int left = 0;
		int right = sz - 1;


		while (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
			left++;
			right--;
		}
	}