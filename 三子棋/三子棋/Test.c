#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#include"game.h"


void menu()
{
	printf("****************************\n");
	printf("*******   1.Play.   ********\n");
	printf("*******   0.Exit.   ********\n");
	printf("****************************\n");

}


void game()     //游戏模块独立出来
{
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);
	PlayerMove(board, ROW, COL);
}


int main()
{
	int input = 0;
	do
	{
		menu();
		printf("\n请选择>>-:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏，记得常玩！^-^");
			break;
		default:
			printf("选择错误，亲重新选择……");
			break;
		}


	} while (input);
	system("pause");
	return 0;
}
