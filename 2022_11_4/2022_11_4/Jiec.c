#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fac(int x)
{
	if (x == 1)
		return 1;
	else
		return x * fac(x - 1);
}
int fac1(int x)
{
	int fac = 1;
	if (x == 1)
		return fac;
	else
	{	
		for (int i = 1; i <= x; i++)
		{
			fac = fac * i;
		}
		return fac;
	}
}
int main ()
{
	printf("%d", fac(3));//递归实现
	printf("\n%d", fac1(3));//迭代实现

	return 0;
}

//void reverse_string(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	*(arr + len - 1) = tmp;
//}