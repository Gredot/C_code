#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main ()
{
	int seconds;
	printf("����������\n");
	scanf("%d", &seconds);
	printf("���������Ա�ʾ��\t%dСʱ%d����%d��", seconds / 3600, (seconds % 3600) / 60, (seconds % 60));
	return 0;
}   
