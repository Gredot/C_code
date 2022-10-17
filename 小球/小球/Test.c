#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int count,n;//定义小球的初始位置
	float high = 100,distance = 0;//定义小球的初始高度和运动距离
	printf("请输入小球的落地次数");
	scanf("%d",&n);
	for (count = 1;count<=n;count++)
	{
		high = high / 2;
		distance += high;
	}
	printf("小球第%d次反弹高度为%f，经过距离为%f距离", n, high, distance);
	return 0;
}