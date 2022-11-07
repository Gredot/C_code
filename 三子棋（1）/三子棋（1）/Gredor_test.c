#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
//游戏菜单
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
	//初始化棋盘
	initialization_board(board,ROW,COL);
	//打印棋盘
	p_board(board, ROW, COL);
	//玩家下棋
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
		printf("电脑赢了\n");
	else if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == 'Q')
		printf("平局\n");
	//判断输赢
	//判断输赢的代码要告诉我：电脑赢了？玩家赢了？玩家赢？游戏继续？
	//电脑赢:#
	//玩家赢:*
	//平局：Q
	//游戏继续：C
}

void test(void)
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();

		printf("请选择：>\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			//游戏的具体实现
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	//游戏逻辑的实现和测试
	test();

	return 0;
}