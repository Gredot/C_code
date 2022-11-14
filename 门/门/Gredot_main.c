#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main ()
{
	int door[210];
	int N;
	scanf("%d", &N);
	//操作N次
	for (int i = 1;i<=N;i++)
	{
		//对1-N的倍数进行操作
		//1的倍数  1-N	  An = （An-1） + 1
		//2的倍数  2 4 6  An = （An-1） + 2
		//3的倍数  3 6 9  An = （An-1） + 3
		for (int j = i;j<=2*N;j+=i)
		{		
			//对符合的门的状态进行相反处理
			door[j] = !door[j];
		}
	}
	int count = 0;
	for (int i = 1; i <= 2 * N; i++)
	{    //对打开的门进行计数
		if (door[i])
			count++;
	}
	printf("%d",count);
	return 0;
}  
