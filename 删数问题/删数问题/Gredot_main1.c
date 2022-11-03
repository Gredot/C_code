#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int flag = 0;
int main ()
{
	int n,k,cnt = 0;
	scanf("%d", &n);
	scanf("%d", &k);    // k<cnt   删除数量小于数字位数
	int a[260] = {0};
	for (int i = 0;n;i++)
	{
		a[i]= n % 10;
		n /= 10;
		cnt++;//读取n的位数
	}
	//将数字拆分成个个位  存放到数组中
	for (int i = 0, j = cnt-1; i < j; i++, j--)
	{
		int t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	//每次找到数字n中最大的数字归零
	while (k)
	{
		int max = a[0];
		for (int i = 0; i < cnt; i++)
			if (a[i] > max)
			{
				max = a[i];
				flag = i;
			}
		a[flag] = 0;
		k--;
	}
	for (int i = 0; i < 10; i++)
	{
		if(a[i]!=0)
		printf("%d ", a[i]);
	}
	return 0;
}

