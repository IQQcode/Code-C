#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>


/*求一个矩阵的鞍点(该点的值在其所在行上最小，在其所在列上最大)*/

//int main(void)
//{
//	int i = 0, j = 0;//行i  列j
//	int d = 0, e = 0, f; //行最大d 列最大e
//	int a = 0, b = 0;
//	int temp, flag = 0;
//	int arr[20][20];
//	printf("请输入矩阵行数和列数:");
//	scanf("%d %d", &i, &j);
//	for (a = 0; a < i; a++)
//	{
//		for (b = 0; b < j; b++)
//		{
//			scanf("%d", &arr[a][b]);
//		}
//	}
//	printf("所输入的矩阵为：\n");
//
//	for (a = 0; a < i; a++)
//	{
//		for (b = 0; b < j; b++)
//			printf("%d ", arr[a][b]);
//		printf("\n");
//	}
//	for (a = 0; a < i; a++)
//	{
//		d = arr[a][1];
//		for (b = 0; b < j; b++)
//		{
//			if (d > arr[a][b])
//			{
//				d = arr[a][b];
//				f = b;
//			}
//		}
//		for (temp = 0; temp < i; temp++)
//		{
//			if (e < arr[temp][f])
//			{
//				e = arr[temp][f];
//			}
//		}
//		if (d == e)
//		{
//			printf("鞍点为%d\n", d);
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

