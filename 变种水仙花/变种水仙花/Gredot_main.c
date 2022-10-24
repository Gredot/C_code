#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c, d, e,x1,x2,x3,x4,x5,x6,x7,x8,i = 0;
	for (i = 10000; i < 100000; i++)
	{
		//拆分五位数各位的数字
		e = i % 10;
		d = i / 10 % 10;
		c = i / 100 % 10;
		b = i / 1000 % 10;
		a = i / 10000;
		//第一种拆分   a 和 bcde  12345
		x1 = a; x2 = b * 1000 + c * 100 + d * 10 + e;
		//第二种拆分   ab 和 cde
		x3 = a * 10 + b; x4 = c * 100 + d * 10 + e;
		//第三种拆分  abc 和 de
		x5 = a * 100 + b * 10 + c; x6 = d * 10 + e;
		//第四种拆分  abcd 和 e
		x7 = a * 1000 + b * 100 + c * 10 + d; x8 = e;
		if (x1 * x2 + x3 * x4 + x5 * x6 + x7 * x8==i)
			printf("%d	",i);
	}
	return 0;
}