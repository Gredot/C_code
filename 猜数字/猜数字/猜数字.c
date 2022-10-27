#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
menu()
{
	printf("********************************************\n");
	printf("****************guess number****************\n");
	printf("****************1.play**********************\n");
	printf("****************0.exit**********************\n");
	printf("********************************************\n");
}
int main()
{
		menu();
		printf("请选择：>\n");
		int in;
		scanf("%d", &in);
		do {
			switch (in) {
			case 1:
			{
				srand((unsigned)time(NULL));
				int n = rand() % 100 + 1;
				int guess;
				printf("请输入1-100的数字\n");
				do {
					scanf("%d", &guess);
					if (guess <= 100 && guess >= 1)
					{
						if (guess > n)
						{
							printf("猜大了！\n");
						}
						else if (guess < n)
						{
							printf("猜小了！\n");
						}
						else
						{
							printf("恭喜你，猜对了！\n");
							break;
						}
					}
					else
					{
						printf("输入错误，请重新输入\n");
					}
				} while (1);
				break;
			}
			case 0:
				break;
			default:
				printf("选择错误，请重新选择\n");
				break;
			}
			menu();
			scanf("%d", &in);
		} while (in);
	return 0;
}