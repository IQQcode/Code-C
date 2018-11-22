#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

//自定义棋盘的行列数
#define ROW 3
#define COL 3

//函数的声明：

 void InitBoard(char board[ROW][COL], int row, int col); //空格初始化棋盘数组（row,col此时是变量名，不再是标号）；

 void DisplayBoard(char board[ROW][COL],int row,int col);//棋盘打印；

 void PlayerMove(char board[ROW][COL], int row, int col);//人机模式下玩家走；

 void ComputerMove(char board[ROW][COL], int row,int col);//电脑走；

void  Player1Move(char board[ROW][COL],int row,int col);//交互模式下Player1走

void  Player2Move(char board[ROW][COL], int row, int col);//Player2走

 char Judge(char board[ROW][COL],int row,int col);//输赢判断；

 int DogFall(char board[ROW][COL], int row, int col);//判断平局（即棋盘满了还没有人赢）


#endif //__GAME_H__