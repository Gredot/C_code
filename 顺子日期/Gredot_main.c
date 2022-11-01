#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main ()
{
	int num;
	int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int cnt = 0;
	for (int i = 1; i <= 12; i++)
	{
		for (int j = 1; j <= day[i]; j++)
		{
			num = i * 100 + j;
			int a = num / 1000;
			int b = num / 100 % 10;
			int c = num / 10 % 10;
			int d = num % 10;
			if(((a+1)==b)&&(b+1)==c)
			{
				if (i < 9)
					printf("20220%d\n", num);
				else
					printf("2022%d\n", num);
				cnt++;
			}
			else if (((b + 1) == c) && (c + 1) == d)
			{
				if (i < 9)
					printf("20220%d\n", num);
				else
					printf("2022%d\n", num);
				cnt++;
			}
		}
	}
	printf("%d\n", cnt);
		return 0;
}