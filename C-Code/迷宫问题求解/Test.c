#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#define M 9 //迷宫行
#define N 8 //迷宫列


//初始化迷宫

int maze[M][N] = {
	{1, 1, 0, 1, 1, 1, 0, 1},
	{1, 1, 0, 1, 1, 1, 0, 1},
	{1, 1, 1, 1,0, 0, 1, 0},
	{1, 0, 0, 0, 1, 1, 0, 1},
	{1, 1, 1, 0, 1, 1, 1, 1},
	{1, 0, 1, 1,1,0,1,0},
	{1,0,0,0,0,0,1,0},
	{0,0,1,1,1,0,1,0},
	{0,0,1,1,1,1,1,1}
};

int move[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };

int Maze(int x, int y)
{
	if (x < 0 || x > M || y < 0 || y > N)
		return 0;
	int a; int b;
	int tag = 0;
	int i = 0;
	//迷宫出口
	if (x == 8 && y == 7)
	{
		return 1;
	}
	//依次走四个路口

	for (i = 0; i < 4; i++)
	{
		a = x + maze[i][0];
		b = y + maze[i][1];

		if (maze[a][b] == 1)
		{
			maze[a][b] = 2;//(a,b)上的值改成2表示走过的路
			//进入路口
			tag = Maze(a, b);

				//判断是否找到出口用于输出路径;
				if (tag)
				{
					printf("%d,%d", a, b);
					return 1;
				}

		}

	}
	return 0;

}

int main()
{
	printf("递归求解迷宫通路：\n");

		Maze(0, 0);

	printf("迷宫入口(0,0)<--入口\n");

	system("pause");
	return 0;
}