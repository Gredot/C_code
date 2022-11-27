#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 1000000; i++)
	{
		//判断i是否为水仙花数
		//1. 计算出i是几位数 - n
		int n = 1;
		int tmp = i;
		while (tmp>9)//153
		{
			tmp /= 10;
			n++;//1 2 3
		}
		//2. 计算i的十进制的每一位的n次方之和，判断是否等于i本身
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}

	return 0;
}
