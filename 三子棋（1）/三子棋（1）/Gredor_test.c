#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
//��Ϸ�˵�
void menu(void)
{
	printf("**********************\n");
	printf("********1.pla*********\n");
	printf("********0.exit********\n");
	printf("**********************\n");
}

game()
{
	char board[ROW][COL];
	//��ʼ������
	initialization_board(board,ROW,COL);
	//��ӡ����
	p_board(board, ROW, COL);
	//�������
	char ret;
	while (1)
	{
		player_move(board, ROW, COL);
		p_board(board, ROW, COL);
		ret =is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		computer_move(board, ROW, COL);
		p_board(board, ROW, COL);
		 ret =is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '#')
		printf("����Ӯ��\n");
	else if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
	//�ж���Ӯ
	//�ж���Ӯ�Ĵ���Ҫ�����ң�����Ӯ�ˣ����Ӯ�ˣ����Ӯ����Ϸ������
	//����Ӯ:#
	//���Ӯ:*
	//ƽ�֣�Q
	//��Ϸ������C
}

void test(void)
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();

		printf("��ѡ��>\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			//��Ϸ�ľ���ʵ��
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}

int main()
{
	//��Ϸ�߼���ʵ�ֺͲ���
	test();

	return 0;
}