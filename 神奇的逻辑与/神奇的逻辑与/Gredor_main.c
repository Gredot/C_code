#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//统计二进制中1的个数
int count_one_bit(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1); //每执行一次n&n-1;就会去掉二进制补码中最右边的1
		count++;
	}
	return count;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = count_one_bit(n);
	printf("%d\n", ret);
	return 0;
}