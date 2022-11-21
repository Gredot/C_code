#pragma once

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<easyx.h>

#define ROW 10
#define COL 10
#define IMGW 40

//º¯ÊýÉùÃ÷
void initMap(int map[ROW][COL]);
void drawMap(int map[ROW][COL], IMAGE img[]);
void mouseEvent(int map[ROW][COL], IMAGE img[]);
void openNull(int map[ROW][COL], int row, int col);
void judge(int map[ROW][COL], int row, int col);
void showMap(int map[ROW][COL]);