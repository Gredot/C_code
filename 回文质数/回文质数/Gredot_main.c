#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*:************����������********************************
 *151������������һ���������������Һʹ��ҵ����ǿ�һ�� *
 *�ģ�������151�ǻ���������дһ���������ҳ���Χ[a,b](5< *
 *=a<b<=100,000,000)(һ��)������л�����������һ��������*
 *��������a��b�����һ�����������б�һ��һ��          *
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
			//������ѭ����ֱ���½���
		}
		if (0 == flag)
			return 1;
		else
			return 0;
	}
}
//�ж�
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
	if (c == a) //���ִ���ת
		return 1;
	else
		return 0;
}
int main ()
{
	////test 1
 //  int ret =is_prime(9);   
 //  printf("%d\n", ret);
   // vs2022 ��֧�ֱ䳤���� int arr[N];
   int a, b;
   scanf("%d%d", &a, &b); // ab ��������Ҷ˵�  a>b

   //��������[a,b]֮�����,�����ҳ�����[a,b]֮�������,���������б���ɸѡ������
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