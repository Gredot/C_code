#include"game.h"
//game中的函数的实现

//初始化棋盘
void initialization_board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void p_board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		printf("___|___|___\n");
	}
}
//玩家下棋
void player_move(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋\n");
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("请输入要下棋的坐标:>\n");
		scanf("%d %d", &x, &y);
		//判断用户输入坐标的合法性
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			//用户输入坐标未使用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("输入坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("输入坐标不合法，请重新输入\n");
		}
	}
}

//电脑下棋
void computer_move(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;

		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//判断游戏是否结束
static int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

//判断胜负
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//判断三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//平局？
	if (is_full(board, row, col) == 1)
	{
		return 'Q';
	}

	//继续
	//没有玩家或者电脑赢，也没有平局，游戏继续
	return 'C';
}