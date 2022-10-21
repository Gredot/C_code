#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main ()
{
	int n;
	scanf("%d", &n);
	printf("%d的因子有：", n);
	for (int i = 1; i <= n; i++)
	{
		if (n%i== 0)
			printf("%d ", i);
	}
	return 0;
}