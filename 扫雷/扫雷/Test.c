#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include"game.h"

void menu()
{
	printf("\n------------------------------\n");
	printf("*******     1.Play.    *******\n");
	printf("*******     0.Exit.    *******\n");
	printf("------------------------------\n");

}

void game()
{
	char Mine[ROWS][COLS] = { 0 };
	char Show[ROWS][COLS] = { 0 };
	InitBoard(Mine, ROWS, COLS, '0');
	InitBoard(Show, ROWS, COLS, '*');
	DisplayBoard(Mine, ROW, COL);
	DisplayBoard(Show, ROW, COL);

}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择>>-:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏，有空常玩^-^!\n");
			break;
		default:
			printf("选择错误，重选选……\n");
			break;
		}
	} while (input);

	system("pause");
	return 0;
}