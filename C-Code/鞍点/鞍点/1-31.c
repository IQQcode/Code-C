#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>


/*��һ������İ���(�õ��ֵ��������������С�����������������)*/

//int main(void)
//{
//	int i = 0, j = 0;//��i  ��j
//	int d = 0, e = 0, f; //�����d �����e
//	int a = 0, b = 0;
//	int temp, flag = 0;
//	int arr[20][20];
//	printf("�������������������:");
//	scanf("%d %d", &i, &j);
//	for (a = 0; a < i; a++)
//	{
//		for (b = 0; b < j; b++)
//		{
//			scanf("%d", &arr[a][b]);
//		}
//	}
//	printf("������ľ���Ϊ��\n");
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
//			printf("����Ϊ%d\n", d);
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("�˾���û�а���\n");
//	}
//	system("pause");
//	return 0;
//}

