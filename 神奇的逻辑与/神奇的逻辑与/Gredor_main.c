#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ͳ�ƶ�������1�ĸ���
int count_one_bit(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1); //ÿִ��һ��n&n-1;�ͻ�ȥ�������Ʋ��������ұߵ�1
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