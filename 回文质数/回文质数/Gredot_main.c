#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*:************回文质数：********************************
 *151即是质数又是一个回文数（从左到右和从右到左是看一样 *
 *的），所以151是回文质数。写一个程序来找出范围[a,b](5< *
 *=a<b<=100,000,000)(一亿)间的所有回文质数，第一行输入两*
 *个正整数a和b。输出一个回文数的列表，一行一个          *
 * ******************************************************/
int is_prime(int x)
{
	int flag = 0;
	if (x == 1)
		return 0;
	else
	{
		for (int i = 2; i < x; i++)
		{
			if (0 == x % i)
				flag++;
			//不能在循环中直接下结论
		}
		if (0 == flag)
			return 1;
		else
			return 0;
	}
}
//判断
int judge(int n)
{
	int a = 0, b, c;
	c = n;
	while (n != 0)
	{
		b = n % 10;
		a = a * 10 + b;
		n /= 10;
	}
	if (c == a) //数字串翻转
		return 1;
	else
		return 0;
}
int main ()
{
	////test 1
 //  int ret =is_prime(9);   
 //  printf("%d\n", ret);
   // vs2022 不支持变长数组 int arr[N];
   int a, b;
   scanf("%d%d", &a, &b); // ab 区间的左右端点  a>b

   //遍历区间[a,b]之间的数,并且找出区间[a,b]之间的质数,再在质数列表中筛选回文数
   for (int i = a; i < b; i++)
   {
	   if (is_prime(i))
	   {
		   if (judge(i))
		   {
			   printf("%d\n", i);
		   }
	   }
   }
	return 0;
}