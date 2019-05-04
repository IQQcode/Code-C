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
	InitBoard(Mine, ROWS, COLS, '0');   //初始化数组
	InitBoard(Show, ROWS, COLS, '*');
	DisplayBoard(Show, ROW, COL);      //打印

	//布置雷
	SetMine(Mine, ROW, COL);
	//DisplayBoard(Mine, ROW, COL);
	
	//排查雷
	FindMine(Mine, Show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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