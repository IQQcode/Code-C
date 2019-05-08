#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

#define M 9 //�Թ���
#define N 8 //�Թ���


//��ʼ���Թ�

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
	//�Թ�����
	if (x == 8 && y == 7)
	{
		return 1;
	}
	//�������ĸ�·��

	for (i = 0; i < 4; i++)
	{
		a = x + maze[i][0];
		b = y + maze[i][1];

		if (maze[a][b] == 1)
		{
			maze[a][b] = 2;//(a,b)�ϵ�ֵ�ĳ�2��ʾ�߹���·
			//����·��
			tag = Maze(a, b);

				//�ж��Ƿ��ҵ������������·��;
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
	printf("�ݹ�����Թ�ͨ·��\n");

		Maze(0, 0);

	printf("�Թ����(0,0)<--���\n");

	system("pause");
	return 0;
}