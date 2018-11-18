#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)  //row,col此时是变量名，不再是标号；
{
//初始化棋盘数组


	memset(&board[0][0], ' ', row * col * sizeof(board[0][0]));  //调用库函数初始化
	
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
			if (board[x - 1][y - 1] == ' ')
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
			printf("输入错误，请重新输入，好好看看棋盘吧^-^\n\n");
		}
	}

}

//电脑走：
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走>>-:\n\n");

	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '0';
			break;
		}

	}
}

//判断每走一步的输赢：
//char Judge(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
//		{
//			return board[i][0];
//		}
//	}
//	for (j = 0; j < col; j++)
//	{
//		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
//		{
//			return board[0][j];
//		}
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[0][0];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[0][2];
//	}


char Judge(char board[ROW][COL], int row, int col)
{
	int i = 0, a = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		while (a < col)
		{
			if (board[i][a] == board[i][a + 1] && board[i][a] != ' ')
			{
				return board[i][0];
			}
			a++;
		}
	}
	for (j = 0; j < col; j++)
	{
		while (a < row)
		{
			if (board[a][j] == board[a+1][j] && board[a][j] != ' ')
			{
				return board[0][j];
			}
			a++;
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		{
		    return board[0][0];
		}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
			{
				return board[0][2];
			}


	//判断平局：
	if (DogFall(board, ROW, COL) == 1)     //棋盘满了返回1.没满返回0；
	{
		return '=';
	}
	//没人赢，没有平局，游戏继续；
	else
	{
		return ' ';
	}
}

//遍历棋盘，看是否满了：
int DogFall(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
