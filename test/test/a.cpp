#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int main()
{
	int f1 = 1, f2 = 1, i = 3, f;
	printf("%10d %10d", f1, f2);
	for (; i <= 20; i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		printf("%10d", f);
		if (i % 5 == 0)
			printf("\n");
	}
	return 0;
}