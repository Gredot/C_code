#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c, d, e,x1,x2,x3,x4,x5,x6,x7,x8,i = 0;
	for (i = 10000; i < 100000; i++)
	{
		//�����λ����λ������
		e = i % 10;
		d = i / 10 % 10;
		c = i / 100 % 10;
		b = i / 1000 % 10;
		a = i / 10000;
		//��һ�ֲ��   a �� bcde  12345
		x1 = a; x2 = b * 1000 + c * 100 + d * 10 + e;
		//�ڶ��ֲ��   ab �� cde
		x3 = a * 10 + b; x4 = c * 100 + d * 10 + e;
		//�����ֲ��  abc �� de
		x5 = a * 100 + b * 10 + c; x6 = d * 10 + e;
		//�����ֲ��  abcd �� e
		x7 = a * 1000 + b * 100 + c * 10 + d; x8 = e;
		if (x1 * x2 + x3 * x4 + x5 * x6 + x7 * x8==i)
			printf("%d	",i);
	}
	return 0;
}