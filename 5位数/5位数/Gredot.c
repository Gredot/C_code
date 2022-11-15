#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int n;
	int a, b, c, d, e;
	printf("请输入一个正整数，该正整数最大为五位数\n");
	scanf("%d", &n);
	a = n / 10000;
	b = n / 1000 % 10;
	c = n / 100 % 10;
	d = n / 10 % 10;
	e = n % 10;
	if (a)
		printf("%d为五位数，逆序打印结果为：%d %d %d %d %d",n,e, d, c, b, a);
	else if(b)
		printf("%d为四位数，逆序打印结果为：%d %d %d %d", n,e, d, c, b);
	else if(c)
		printf("%d为三位数，逆序打印结果为：%d %d %d",n, e, d, c);
	else if(d)
		printf("%d为两位数，逆序打印结果为：%d %d",n, e, d);
	else if(e)
		printf("%d为一位数,逆序打印结果为本身：%d",n, e);
	return 0;
}  
