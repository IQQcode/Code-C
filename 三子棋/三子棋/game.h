#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define ROW 3
#define COL 3

//函数的声明：

 void InitBoard(char board[ROW][COL], int row, int col); //row,col此时是变量名，不再是标号；

 void DisplayBoard(char board[ROW][COL],int row,int col);

 void PlayerMove(char board[ROW][COL], int row, int col);

 void ComputerMove(char board[ROW][COL], int row,int col);

 char Judge(char board[ROW][COL],int row,int col);

 int DogFall(char board[ROW][COL], int row, int col);


#endif //__GAME_H__