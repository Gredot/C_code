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
		printf("��ѡ��>\n");
		int in;
		scanf("%d", &in);
		do {
			switch (in) {
			case 1:
			{
				srand((unsigned)time(NULL));
				int n = rand() % 100 + 1;
				int guess;
				printf("������1-100������\n");
				do {
					scanf("%d", &guess);
					if (guess <= 100 && guess >= 1)
					{
						if (guess > n)
						{
							printf("�´��ˣ�\n");
						}
						else if (guess < n)
						{
							printf("��С�ˣ�\n");
						}
						else
						{
							printf("��ϲ�㣬�¶��ˣ�\n");
							break;
						}
					}
					else
					{
						printf("�����������������\n");
					}
				} while (1);
				break;
			}
			case 0:
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
			}
			menu();
			scanf("%d", &in);
		} while (in);
	return 0;
}