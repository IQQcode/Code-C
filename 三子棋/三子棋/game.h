#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __TEST_H_
#define __TEST_H_

#include<stdio.h>
#include<string.h>

#define ROW 3
#define COL 3

//函数的声明：

 void InitBoard(char board[ROW][COL], int row, int col); //row,col此时是变量名，不再是标号；

 void DisplayBoard(char board[ROW][COL],int row,int col);

 void PlayerMove(char board[ROW][COL], int row, int col);


#endif   //__TEST_H__

