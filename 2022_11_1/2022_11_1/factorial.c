#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ʹ�ú����ݹ���n��
long long factorial(int x)
{ 
	int F = 1;
	if (1 == x)
	{
		return 1;
	}
	else
		F = x * factorial(x - 1);
	return F;
}
int main ()
{
    printf(" %d", factorial(4));
	return 0;
}