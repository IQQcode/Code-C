#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)  //row,col��ʱ�Ǳ������������Ǳ�ţ�
{
//��ʼ����������


	memset(&board[0][0], ' ', row * col * sizeof(board[0][0]));  //���ÿ⺯����ʼ��
	
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
			if (board[x - 1][y - 1] == ' ')
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
			printf("����������������룬�úÿ������̰�^-^\n\n");
		}
	}

}

//�����ߣ�
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������>>-:\n\n");

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

//�ж�ÿ��һ������Ӯ��
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


	//�ж�ƽ�֣�
	if (DogFall(board, ROW, COL) == 1)     //�������˷���1.û������0��
	{
		return '=';
	}
	//û��Ӯ��û��ƽ�֣���Ϸ������
	else
	{
		return ' ';
	}
}

//�������̣����Ƿ����ˣ�
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
