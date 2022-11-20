#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int* triangle_num(int triangle[51])
{
	int i = 1;
	for(i = 1;i<51;i++)
	{
		if (i == 1)
			triangle[i] = 1;
		else
			triangle[i] = i + triangle[i - 1];
	}
	return triangle[51];
}

int main ()
{
	int triangle[51] = { 0 };
	triangle_num(triangle);
	for (int i = 1; i < 51; i++)
	{
		if (i % 10 == 0)
		{
			printf("%d", triangle[i]);
			printf("\n");
		}
		else
			printf("%d ", triangle[i]);
		
	}
	return 0;
}