#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i = 1;
	int k = 0;
	scanf("%d",&k);
	int ans = 0;
	double Sn = 0;
	while (1)
	{
		Sn += 1.0 / i;
		if (Sn > k)
			break;
		i++;
	}
	printf("%d",i);
	return 0;
}