#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include"game.h"


void menu()
{
	printf("***********************************\n");
	printf("*******     1.Play.        ********\n");
	printf("*******     2.Mutual Play. ********\n");
	printf("*******     0.Exit.        ********\n");
	printf("***********************************\n");

}


void game()     //游戏模块独立出来
{
	char board[ROW][COL] = { 0 };
	char win = 0;

	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);

	while (1)
	{
		PlayerMove(board, ROW, COL);
	win = Judge(board, ROW, COL);
	if (win != ' ')
		break;
	DisplayBoard(board, ROW, COL);

	    ComputerMove(board, ROW, COL);
		win = Judge(board, ROW, COL);
		if (win != ' ')
			break;
	DisplayBoard(board, ROW, COL);

	}
	if (win =='X')
		printf("恭喜你，你赢了！\n");
	else if (win == '0')
		printf("哎呀呀，你输了，要加油呀！\n");
	else if (win == '=')
		printf("**平局**\n");

	DisplayBoard(board, ROW, COL);

}

void Mutualgame()     //游戏模块独立出来
{
	char board[ROW][COL] = { 0 };
	char win = 0;

	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		Player1Move(board, ROW, COL);
		win = Judge(board, ROW, COL);
		if (win != ' ')
			break;
		DisplayBoard(board, ROW, COL);

		Player2Move(board, ROW, COL);
		win = Judge(board, ROW, COL);
		if (win != ' ')
			break;
		DisplayBoard(board, ROW, COL);

	}
	if (win == 'X')
		printf("恭喜Player1，你赢了！\n");
	else if (win == '0')
		printf("哎呀呀，恭喜Player2获胜！Player1输了，要加油呀！\n");
	else if (win == '=')
		printf("**平局**\n");

	DisplayBoard(board, ROW, COL);

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

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
		case 2:
			Mutualgame();
			break;
		case 0:
			printf("退出游戏，记得常玩！^-^\n");
			break;
		default:
			printf("选择错误，亲重新选择……\n");
			break;
		}


	} while (input);

	system("pause");
	return 0;
}
