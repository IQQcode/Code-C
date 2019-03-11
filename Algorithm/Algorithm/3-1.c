#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

   //*1.矩阵鞍点（所在行最小，所在列最大）*//
//int main() 
//{
//	int arr[20][20] = { 0 };
//	int row = 0; int col = 0;//矩阵的行和列
//	int i  = 0, j = 0;
//	int Rmax = 0,Rmin = 0;
//	int tm = 0, flag = 0;
//	printf("请输入矩阵行数和列数:");
//	scanf("%d %d", &row, &col);
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	printf("所输入的矩阵为：\n");
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//
//	for (i = 0; i < row; i++) 
//	{
//		Rmax = arr[i][0];
//		for (j = 0; j < col; j++)
//		{
//			if (arr[i][j] < arr[i][0])
//			{
//				Rmax = arr[i][j];	//找出每一行的最小值Rmax
//				tm = j;
//			}
//		}
//		for (int temp = 0; temp < col; temp++)
//		{
//			if (arr[Rmin][tm] < arr[temp][tm])
//			{
//				Rmin = arr[temp][tm];  //找出每一列的最大值Rmin
//			}
//		}
//		if (Rmax == Rmin)
//		{
//			printf("鞍点为%d\n", Rmax);
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("此矩阵没有鞍点\n");
//	}
//	system("pause");
//	return 0;
//}


/*
  2.求1 *2 * 3*...* n所得数末尾有多少个0？     */

//int main()
//{
//	int n = 0,sum = 0;
//	scanf("%d", &n);
//	int temp = sum;
//	int count = 0;
//	for (int i = 1; i < n; i++)
//	{
//		sum *= i;
//	}
//	while (temp > 1)
//	{
//		temp = temp / 10;
//		count++;
//	}
//	printf("前n项乘积中有%d个0", count);
//	system("pause");
//		return 0;
//}

/*
   3.螺旋数组
*/

int main()
{
	int n = 7, i, j, a[105][105], o = 0, x = 1, u, v, l, r;
	u = 0; v = n - 1; l = 0; r = n - 1;
	while (x <= n * n)
	{
		for (i = l; i <= r; i++)
		{
			a[u][i] = x++;
		}
		u++;
		for (i = u; i <= v; i++)
		{
			a[i][r] = x++;
		}
		r--;
		for (i = r; i >= l; i--)
		{
			a[v][i] = x++;
		}
		v--;
		for (i = v; i >= u; i--)
		{
			a[i][l] = x++;
		}
		l++;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%3d", a[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}
