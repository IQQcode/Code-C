#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set)
{
	//初始化数组的地址  初始化的内容    初始化的字节数
	memset(&Board[0][0], set, rows*cols * sizeof(Board[0][0]));
}

void DisplayBoard(char Board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", Board[i][j]);
		}
		printf("\n");
	}
	printf("------------------------------\n");
}


