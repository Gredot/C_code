#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int fac(int x)
//{
//	if (x == 1)
//		return 1;
//	else
//		return x * fac(x - 1);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", fac(n));
//	return 0;
//}

int XN(int x,int n)
{
	if (n == 0)
		return 1;
	else
		return x * XN(x,n-1);
}

int main()
{
	int X,N;
	scanf("%d%d", &X, &N);
	printf("%d", XN(X, N));
}


//int Stringlen(char* str)
//{
//	if ('\0' == *str)
//		return 0;
//	else
//		return 1 + Stringlen(1 + str);
//}
//
//int main()
//{
//	char string[10] = { 0 };
//	gets(string);
//
//	printf("%d", Stringlen(string));
//}
// 
