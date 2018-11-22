#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

//�Զ������̵�������
#define ROW 3
#define COL 3

//������������

 void InitBoard(char board[ROW][COL], int row, int col); //�ո��ʼ���������飨row,col��ʱ�Ǳ������������Ǳ�ţ���

 void DisplayBoard(char board[ROW][COL],int row,int col);//���̴�ӡ��

 void PlayerMove(char board[ROW][COL], int row, int col);//�˻�ģʽ������ߣ�

 void ComputerMove(char board[ROW][COL], int row,int col);//�����ߣ�

void  Player1Move(char board[ROW][COL],int row,int col);//����ģʽ��Player1��

void  Player2Move(char board[ROW][COL], int row, int col);//Player2��

 char Judge(char board[ROW][COL],int row,int col);//��Ӯ�жϣ�

 int DogFall(char board[ROW][COL], int row, int col);//�ж�ƽ�֣����������˻�û����Ӯ��


#endif //__GAME_H__