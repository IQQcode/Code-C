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


void game()     //��Ϸģ���������
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
		printf("\n��ѡ��>>-:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ���ǵó��棡^-^");
			break;
		default:
			printf("ѡ�����������ѡ�񡭡�");
			break;
		}


	} while (input);
	system("pause");
	return 0;
}
