#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int count,n;//����С��ĳ�ʼλ��
	float high = 100,distance = 0;//����С��ĳ�ʼ�߶Ⱥ��˶�����
	printf("������С�����ش���");
	scanf("%d",&n);
	for (count = 1;count<=n;count++)
	{
		high = high / 2;
		distance += high;
	}
	printf("С���%d�η����߶�Ϊ%f����������Ϊ%f����", n, high, distance);
	return 0;
}