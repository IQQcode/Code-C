#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//��ȱ��������

int amount = 0;
int Board[100][100] = { 0 };

//���ǲ�ȱ����

void cover(int tr, int tc, int dr, int dc, int size)
{
	int t = 0, s = 0;
	if (size == 1)
		return;

	amount = amount + 1;  //��������Ŀ
	t = amount;         //���������̴�С
	s = size / 2;

	//tr ���������ϽǷ���������
	//tc ���������ϽǷ���������
	//dr ��ȱ����������
	//dc ��ȱ����������
	//size ���̵�������

	// ��ȱ����λ����������

	if (dr < tr + s && dc < tc + s)
	{
		cover(tr, tc, dr, dc, s);
		//����1��������
		Board[tr + s - 1][tc + s] = t;
		Board[tr + s][tc + s - 1] = t;
		Board[tr + s][tc + s] = t;
		//�������ಿ��
		cover(tr, tc + s, tr + s - 1, tc + s, s);
		cover(tr + s, tc, tr + s, tc + s - 1, s);
		cover(tr + s, tc + s, tr + s, tc + s, s);
	}


	//��ȱ����λ�����Ͻ�����
	else if (dr < tr + s && dc > tc + s)
	{
		cover(tr, tc + s, dr, dc, s);
		//����2��������
		Board[tr + s - 1][tc + s - 1] = t;
		Board[tr + s][tc + s - 1] = t;
		Board[tr + s][tc + s] = t;
		//�������ಿ��
		cover(tr, tc, tr + s - 1, tc + s - 1, s);
		cover(tr + s, tc, tr + s, tc + s - 1, s);
		cover(tr + s, tc + s, tr + s, tc + s, s);
	}



	//��ȱ����λ�����½�����
	else if (dr >= tr + s && dc <= tc + s)
	{
		cover(tr + s, tc, dr, dc, s);
		//����3��������
		Board[tr + s - 1][tc + s - 1] = t;
		Board[tr + s - 1][tc + s] = t;
		Board[tr + s][tc + s] = t;
		//�������ಿ��
		cover(tr, tc + s, tr + s - 1, tc + s - 1, s);
		cover(tr, tc + s, tr + s - 1, tc + s, s);
		cover(tr + s, tc + s, tr + s, tc + s, s);

	}


	//��ȱ����λ�����½�����
	else if (dr >= tr + s && dc >= tc + s)
	{
		cover(tr + s, tc + s, dr, dc, s);
		//����4��������
		Board[tr + s - 1][tc + s] = t;
		Board[tr + s][tc + s - 1] = t;
		Board[tr + s][tc + s] = t;
		//�������ಿ��
		cover(tr, tc + s, tr + s - 1, tc + s - 1, s);
		cover(tr, tc + s, tr + s - 1, tc + s, s);
		cover(tr + s, tc, tr + s, tc + s - 1, s);

	}


}


//��ӡ����

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

	printf("���������̵ĸ��С��(2^n),n = ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		size = size * 2;
	}

	printf("�������ȱ���ӵ����꣺(x y):");
	scanf("%d%d", &x, &y);

	cover(0, 0, x, y, size);
	outputBoard(size);

	system("pause");
	return 0;
}


