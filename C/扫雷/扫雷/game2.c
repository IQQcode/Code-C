#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set)
{
	//��ʼ������ĵ�ַ  ��ʼ��������    ��ʼ�����ֽ���
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
	//���������
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (Board[x][y] == '0')
		{
			Board[x][y] = '1';
			count--;//ֱ�����׳ɹ���count��--��
		}
		//ѭ������һ������10����count--���ڴ�ֻѭ��10��
	}
}

void FindMine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row,int col)
{
	int x =0 ;
	int y =0 ;
	while (1)
	{
		printf("������Ҫ�Ų�����꣺>>-");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (Mine [x][y] = '1')
			{
				printf("���ź���������ˣ���Ϸ������\n");
				DisplayBoard(Mine,ROW,COL);
				break;   //��Ϸ��������������
            }
			else //��������ף�����������Χ�׵ĸ�����
			{

			}
		}
		else
		{
			printf("����������������������^-^����\n");
		}
	}
}



