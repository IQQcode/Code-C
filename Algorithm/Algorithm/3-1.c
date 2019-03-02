#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

   //*1.矩阵鞍点（所在行最小，所在列最大）*//
int main() 
{
	int arr[20][20] = { 0 };
	int row = 0; int col = 0;//矩阵的行和列
	int i  = 0, j = 0;
	int Rmax = 0,Rmin = 0;
	int tm = 0, flag = 0;
	printf("请输入矩阵行数和列数:");
	scanf("%d %d", &row, &col);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("所输入的矩阵为：\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	for (i = 0; i < row; i++) 
	{
		Rmax = arr[i][0];
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] < arr[i][0])
			{
				Rmax = arr[i][j];	//找出每一行的最小值Rmax
				tm = j;
			}
		}
		for (int temp = 0; temp < col; temp++)
		{
			if (arr[Rmin][tm] < arr[temp][tm])
			{
				Rmin = arr[temp][tm];  //找出每一列的最大值Rmin
			}
		}
		if (Rmax == Rmin)
		{
			printf("鞍点为%d\n", Rmax);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("此矩阵没有鞍点\n");
	}
	system("pause");
	return 0;
}
