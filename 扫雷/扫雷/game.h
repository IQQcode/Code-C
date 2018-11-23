#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void InitBoard(char Board[ROWS][COLS],int rows,int cols,char set);//Board��InitBoard���������֣�

void DisplayBoard(char Board[ROWS][COLS],int row,int col);//char Board[ROWS][COLS]����������飬���δ��������������Ԫ�ش�ӡ����row��col

void SetMine(char Board[ROWS][COLS],int row,int col);//�����ף�

void FindMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row,int col);//�Ų��ף�

#endif  //__GAME_H__