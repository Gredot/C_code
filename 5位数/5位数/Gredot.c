#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int n;
	int a, b, c, d, e;
	printf("������һ���������������������Ϊ��λ��\n");
	scanf("%d", &n);
	a = n / 10000;
	b = n / 1000 % 10;
	c = n / 100 % 10;
	d = n / 10 % 10;
	e = n % 10;
	if (a)
		printf("%dΪ��λ���������ӡ���Ϊ��%d %d %d %d %d",n,e, d, c, b, a);
	else if(b)
		printf("%dΪ��λ���������ӡ���Ϊ��%d %d %d %d", n,e, d, c, b);
	else if(c)
		printf("%dΪ��λ���������ӡ���Ϊ��%d %d %d",n, e, d, c);
	else if(d)
		printf("%dΪ��λ���������ӡ���Ϊ��%d %d",n, e, d);
	else if(e)
		printf("%dΪһλ��,�����ӡ���Ϊ����%d",n, e);
	return 0;
}  
