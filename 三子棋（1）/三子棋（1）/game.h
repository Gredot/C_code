#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3 
#define COL 3 

//�����������ļ�

//��ʼ������
void initialization_board(char board[ROW][COL],int row ,int col);

//��ӡ����
void p_board(char board[ROW][COL], int row , int col );

//�������
void player_move(char board[ROW][COL], int row, int col);

//��������
void computer_move(char board[ROW][COL], int row, int col);

//�ж���Ϸ�Ƿ����
char is_win(char board[ROW][COL], int row, int col);