#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
#include"game.h"

void InitBoard(char InitBoard[ROW][COL], int row, int col)  //row,col��ʱ�Ǳ������������Ǳ�ţ�
{
//��ʼ����������

	char board[ROW][COL] = { 0 };

	memset(&board[0][0], ' ', row * col * sizeof(board[0][0]));  //���ÿ⺯����ʼ��
	

    //forѭ����ʼ��
	/*int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			board[i][j] = ' ';
		}

	}*/
}

//��ӡ���̣�
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

//��ҷ�������
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����>:");
	while (1)
	{
		printf("������Ҫ�������ӵ�����>>-:");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�����λ�÷��������ӣ������ڴ���������
			if (board[x - 1][y - 1] ==' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("�����������ˣ����������ط���!^-^\n");
			}

		}
		else
		{
			printf("����������������룬�úÿ������̰�^-^\n");
		}
	}

}
