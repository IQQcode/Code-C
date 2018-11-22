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


void game()     //��Ϸģ���������
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
		printf("��ϲ�㣬��Ӯ�ˣ�\n");
	else if (win == '0')
		printf("��ѽѽ�������ˣ�Ҫ����ѽ��\n");
	else if (win == '=')
		printf("**ƽ��**\n");

	DisplayBoard(board, ROW, COL);

}

void Mutualgame()     //��Ϸģ���������
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
		printf("��ϲPlayer1����Ӯ�ˣ�\n");
	else if (win == '0')
		printf("��ѽѽ����ϲPlayer2��ʤ��Player1���ˣ�Ҫ����ѽ��\n");
	else if (win == '=')
		printf("**ƽ��**\n");

	DisplayBoard(board, ROW, COL);

}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("\n��ѡ��>>-:");
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
			printf("�˳���Ϸ���ǵó��棡^-^\n");
			break;
		default:
			printf("ѡ�����������ѡ�񡭡�\n");
			break;
		}


	} while (input);

	system("pause");
	return 0;
}
