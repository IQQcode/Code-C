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

void InitBoard(char Board[ROWS][COLS],int rows,int cols,char set);//Board是InitBoard函数的名字；

void DisplayBoard(char Board[ROWS][COLS],int row,int col);//char Board[ROWS][COLS]是整体的数组，传参传的是数组的所有元素打印的是row和col

void SetMine(char Board[ROWS][COLS],int row,int col);//布置雷；

void FindMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row,int col);//排查雷；

#endif  //__GAME_H__