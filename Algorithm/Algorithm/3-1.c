#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

   //*1.���󰰵㣨��������С�����������*//
int main() 
{
	int arr[20][20] = { 0 };
	int row = 0; int col = 0;//������к���
	int i  = 0, j = 0;
	int Rmax = 0,Rmin = 0;
	int tm = 0, flag = 0;
	printf("�������������������:");
	scanf("%d %d", &row, &col);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("������ľ���Ϊ��\n");
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
				Rmax = arr[i][j];	//�ҳ�ÿһ�е���СֵRmax
				tm = j;
			}
		}
		for (int temp = 0; temp < col; temp++)
		{
			if (arr[Rmin][tm] < arr[temp][tm])
			{
				Rmin = arr[temp][tm];  //�ҳ�ÿһ�е����ֵRmin
			}
		}
		if (Rmax == Rmin)
		{
			printf("����Ϊ%d\n", Rmax);
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("�˾���û�а���\n");
	}
	system("pause");
	return 0;
}
