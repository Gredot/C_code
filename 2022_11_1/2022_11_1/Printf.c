#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//递归函数    实现打印一个数的每一位
void Printf(int n)
{
	if (n > 9)
		Printf(n / 10);
	printf("%d ", n % 10);
}
int main ()
{
	Printf(1927);
	return 0;
}