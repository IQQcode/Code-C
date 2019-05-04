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

void SetMine(char Board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	//生成随机雷
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (Board[x][y] == '0')
		{
			Board[x][y] = '1';
			count--;//直到布雷成功，count才--；
		}
		//循环次数一定大于10，而count--放在此只循环10次
	}
}

void FindMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row,int col)
{
	int x =0 ;
	int y =0 ;
	while (1)
	{
		printf("请输入要排查的坐标：>>-");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (Mine [x][y] = '1')
			{
				printf("很遗憾，你踩雷了，游戏结束！\n");
				DisplayBoard(Mine,ROW,COL);
				break;   //游戏结束，立即跳出
            }
			else //如果不是雷，计算坐标周围雷的个数；
			{

			}
		}
		else
		{
			printf("输入坐标有误，请重新输入^-^……\n");
		}
	}
}



