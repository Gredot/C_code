#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����Լ��
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
	return x; // ���һ�μ���������Ϊ��󽫳���y��ֵ����x  ���з���ֵΪx
}

int main ()
{
	//��С������  ���ù�ʽ��  �����˻������������������Լ������С�������ĵĻ�
	//1������շת����� /����  ������Լ��
	//2����С������ = �����˻�/���Լ��

	int m, n,gcd,lcm;
	printf("�����������Ǹ�����\n");
	scanf("%d%d", &m, &n);
	gcd = get_gcd(m,n);
	lcm = m * n / gcd;
	printf("%d��%d�����Լ��Ϊ%d,\n  ��С������Ϊ%d", m, n, gcd, lcm);
	return 0;
}