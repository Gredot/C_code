#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0, i = 0, sum;
	for (n = 2; n < 1000; n++)
	{
		sum = 0;
		for (i = 1; i < n; i++)
		{
			if (n % i == 0)//�ҳ�n����������
			{
				sum += i; // �����������
			}
		}
		if (sum == n)   //���ӵĺ͵��ڸ���  
			printf("%d ������ ", n);
	}
	return 0;
}
