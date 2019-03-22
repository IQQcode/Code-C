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

//int main()
//{
//	int n = 7, i, j, a[105][105], o = 0, x = 1, u, v, l, r;
//	u = 0; v = n - 1; l = 0; r = n - 1;
//	while (x <= n * n)
//	{
//		for (i = l; i <= r; i++)
//		{
//			a[u][i] = x++;   //1,2,3,4,5,6,7
//		}
//		u++;
//		for (i = u; i <= v; i++)
//		{
//			a[i][r] = x++;  //8,9,10,11,12,13
//		}
//		r--;
//		for (i = r; i >= l; i--)
//		{
//			a[v][i] = x++;  //14,15,16,17,18,19
//		}
//		v--;
//		for (i = v; i >= u; i--)
//		{
//			a[i][l] = x++;  //20,21,22,23,24
//		}
//		l++;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			printf("%3d", a[i][j]);
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


/*
   A,B,C,D,E排名问题
*/
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;//定义五个参数，作为五名运动员的排名

	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)//五层循环，依次对应每位选手的排名
					{
						if (((b == 3) + (c == 5) == 1) &&
							((d == 2) + (e == 4) == 1) &&
							((b == 1) + (e == 4) == 1) &&
							((c == 1) + (b == 2) == 1) &&
							((d == 2) + (a == 3) == 1))   //因为每个人说对了一半，所以，两个
							//条件中只有一个为1，则加在一起就为1
						{
							if ((a != b) && (a != c) && (a != d) && (a != e) &&
								(b != c) && (b != d) && (b != e) &&
								(c != d) && (c != e) && (d != e))//每个人的排名都不能像等
							{
								printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);

							}
						}
					}
				}
			}
		}
	}

	system("pause");
	return 0;
}
