#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ݹ麯��    ʵ�ִ�ӡһ������ÿһλ
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