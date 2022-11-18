#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int r, c=1, s;
	printf("«Î ‰»Î–– ˝£∫");
	scanf("%d", &r);
	for (int i = 0; i < r; i++)
	{
		for (s = 1; s <= r - i; s++)
			printf("  ");
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == 0)
				c = 1;
			else
				c = c * (i - j + 1) / j;
			printf("%4d", c);
		}
		printf("\n");
	}
	return 0;
}     
