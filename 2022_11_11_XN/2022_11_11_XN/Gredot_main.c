#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int XN(int X, int N)
{
	if (N == 0)
		return 1;
	else
		return X* XN(X, N - 1);
}
int main()
{
	int ret = XN(3, 3);
	printf("%d", ret);
	return 0;
}