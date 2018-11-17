#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
#include"game.h"

void InitBoard(char InitBoard[ROW][COL], int row, int col)  //row,col此时是变量名，不再是标号；
{
//初始化棋盘数组

	char board[ROW][COL] = { 0 };

	memset(&board[0][0], ' ', row * col * sizeof(board[0][0]));  //调用库函数初始化
	

    //for循环初始化
	/*int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			board[i][j] = ' ';
		}

	}*/
}

//打印棋盘：
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		/*printf(" %c | %c | %c  \n", board[i][0], board[i][1], board[i][2]);
		if(i<row-1)
		printf("---|---|---  \n");*/

		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
			printf("|");
        }
		printf("\n");

		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

//玩家放置棋子
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走>:");
	while (1)
	{
		printf("请输入要放置棋子的坐标>>-:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//如果该位置放置了棋子，则不能在此输入坐标
			if (board[x - 1][y - 1] ==' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("这里有棋子了，不妨换个地方吧!^-^\n");
			}

		}
		else
		{
			printf("输入错误，请重新输入，好好看看棋盘吧^-^\n");
		}
	}

}
