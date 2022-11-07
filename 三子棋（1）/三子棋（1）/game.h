#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3 
#define COL 3 

//函数的声明文件

//初始化器盘
void initialization_board(char board[ROW][COL],int row ,int col);

//打印棋盘
void p_board(char board[ROW][COL], int row , int col );

//玩家下棋
void player_move(char board[ROW][COL], int row, int col);

//电脑下棋
void computer_move(char board[ROW][COL], int row, int col);

//判断游戏是否结束
char is_win(char board[ROW][COL], int row, int col);