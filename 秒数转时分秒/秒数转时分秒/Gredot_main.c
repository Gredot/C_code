#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main ()
{
	int seconds;
	printf("请输入秒数\n");
	scanf("%d", &seconds);
	printf("该秒数可以表示成\t%d小时%d分钟%d秒", seconds / 3600, (seconds % 3600) / 60, (seconds % 60));
	return 0;
}   
