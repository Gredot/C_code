#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 1000000; i++)
	{
		//�ж�i�Ƿ�Ϊˮ�ɻ���
		//1. �����i�Ǽ�λ�� - n
		int n = 1;
		int tmp = i;
		while (tmp>9)//153
		{
			tmp /= 10;
			n++;//1 2 3
		}
		//2. ����i��ʮ���Ƶ�ÿһλ��n�η�֮�ͣ��ж��Ƿ����i����
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
