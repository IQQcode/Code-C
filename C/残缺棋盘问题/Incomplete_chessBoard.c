#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//残缺棋盘问题

int amount = 0;
int Board[100][100] = { 0 };

//覆盖残缺棋盘

void cover(int tr, int tc, int dr, int dc, int size)
{
	int t = 0, s = 0;
	if (size == 1)
		return;

	amount = amount + 1;  //三隔板数目
	t = amount;         //子问题棋盘大小
	s = size / 2;

	//tr 子棋盘左上角方格所在行
	//tc 子棋盘左上角方格所在列
	//dr 残缺方格所在行
	//dc 残缺方格所在列
	//size 棋盘的行列数

	// 残缺方格位于左上棋盘

	if (dr < tr + s && dc < tc + s)
	{
		cover(tr, tc, dr, dc, s);
		//覆盖1号三隔板
		Board[tr + s - 1][tc + s] = t;
		Board[tr + s][tc + s - 1] = t;
		Board[tr + s][tc + s] = t;
		//覆盖其余部分
		cover(tr, tc + s, tr + s - 1, tc + s, s);
		cover(tr + s, tc, tr + s, tc + s - 1, s);
		cover(tr + s, tc + s, tr + s, tc + s, s);
	}


	//残缺方格位于右上角棋盘
	else if (dr < tr + s && dc > tc + s)
	{
		cover(tr, tc + s, dr, dc, s);
		//覆盖2号三隔板
		Board[tr + s - 1][tc + s - 1] = t;
		Board[tr + s][tc + s - 1] = t;
		Board[tr + s][tc + s] = t;
		//覆盖其余部分
		cover(tr, tc, tr + s - 1, tc + s - 1, s);
		cover(tr + s, tc, tr + s, tc + s - 1, s);
		cover(tr + s, tc + s, tr + s, tc + s, s);
	}



	//残缺方格位于左下角棋盘
	else if (dr >= tr + s && dc <= tc + s)
	{
		cover(tr + s, tc, dr, dc, s);
		//覆盖3号三隔板
		Board[tr + s - 1][tc + s - 1] = t;
		Board[tr + s - 1][tc + s] = t;
		Board[tr + s][tc + s] = t;
		//覆盖其余部分
		cover(tr, tc + s, tr + s - 1, tc + s - 1, s);
		cover(tr, tc + s, tr + s - 1, tc + s, s);
		cover(tr + s, tc + s, tr + s, tc + s, s);

	}


	//残缺方格位于右下角棋盘
	else if (dr >= tr + s && dc >= tc + s)
	{
		cover(tr + s, tc + s, dr, dc, s);
		//覆盖4号三隔板
		Board[tr + s - 1][tc + s] = t;
		Board[tr + s][tc + s - 1] = t;
		Board[tr + s][tc + s] = t;
		//覆盖其余部分
		cover(tr, tc + s, tr + s - 1, tc + s - 1, s);
		cover(tr, tc + s, tr + s - 1, tc + s, s);
		cover(tr + s, tc, tr + s, tc + s - 1, s);

	}


}


//打印棋盘

void outputBoard(int size)
{

	int i = 0, j = 0;

	for (i = 0; i < size; i++)
	{

		for (j = 0; j < size; j++)
		{
			printf("%3d ", Board[i][j]);
			printf("\n");
		}

	}

}

int main()
{
	int size = 1;
	int x = 0, y = 0, i = 0, j = 0, n = 0;

	printf("请输入棋盘的格大小：(2^n),n = ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		size = size * 2;
	}

	printf("请输入残缺棋子的坐标：(x y):");
	scanf("%d%d", &x, &y);

	cover(0, 0, x, y, size);
	outputBoard(size);

	system("pause");
	return 0;
}


