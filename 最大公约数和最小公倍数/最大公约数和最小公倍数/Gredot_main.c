#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求最大公约数
int get_gcd(int x,int y)
{
	int temp;
	if (y > x) 
	{
		temp = x;
		x = y;
		y = temp;
	}
	while (y !=0)
	{
		temp = x % y;
		x = y;
		y = temp;
	}
	return x; // 最后一次计算完余数为零后将除数y的值赋给x  所有返回值为x
}

int main ()
{
	//最小公倍数  利用公式法  两数乘积等于这两个数的最大公约数和最小公倍数的的积
	//1、利用辗转相除法 /其他  求出最大公约数
	//2、最小公倍数 = 两数乘积/最大公约数

	int m, n,gcd,lcm;
	printf("请输入两个非负整数\n");
	scanf("%d%d", &m, &n);
	gcd = get_gcd(m,n);
	lcm = m * n / gcd;
	printf("%d和%d的最大公约数为%d,\n  最小公倍数为%d", m, n, gcd, lcm);
	return 0;
}