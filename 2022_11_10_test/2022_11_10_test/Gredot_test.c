#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main ()
//{
//		int n, v1, v2, b, a;
//		scanf("%d%d%d", &n, &a, &b);
//		v1 = (n / a + n / b) / 2;
//		v2 = n / b - (n / a + n / b) / 2;
//		printf("%d %d", v1, v2);
//	return 0;
//}

//      循环求n！& 求n！的和
//int fac(int x)
//{
//	int fa = 1;
//	if (x < 2 && x > 0);
//	else
//	{
//		while (x)
//		{
//			fa = fa * x;
//			x--;
//		}
//	}
//	return fa;
//}
//
//int sfac(int x)
//{
//	int i = 0,sum = 0;
//	for (i = 1; i <= x; i++)
//	{
//		sum += fac(i);
//	}
//	return sum;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", fac(n));
//	printf("%d\n", sfac(n));
//
//	return 0;
//}

//		二分查找
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int key = 7;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//
//		if (left <= right)
//		{
//			printf("找到了，下标是\n%d", mid);
//		}
//		else
//		{
//			printf("找不到！");
//		}
//	
//	return 0;
//}