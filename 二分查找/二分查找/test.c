#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10];
	//定义二分查找所需的左下标、右下标；
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	//所查找元素
	int key = 3; 
	//给arr数组赋值
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//给arr数组中的元素进行升序排列
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
	//左下标大于右下标   停止查找
	while (left<=right)
	{
		//中间元素下标    //循环计算   不断更新中间元素的下标
		int mid = (left + right) / 2;
		//中间元素大于所查找元素    更新右下标
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		//中间元素小于所查找元素    更新左下标
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		//中间元素等于所查找元素  找到啦
		else 
		{
			printf("找到了\n");
			break;
		}
	}
	//二分查找完毕后还未找到  找不到啦
	if (left > right)
	{
		printf("找不到了");
	}
	return 0;
}