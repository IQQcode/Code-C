#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//1.��ӡ�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int line = 0;
//	printf("������Ҫ��ӡ���к��У�");
//	scanf("%d", &line);
//	for (i = 1; i <= line; i++)
//	{
//
//		for (j = 1; j <= line; j++)
//		{
//			printf("%d * %d = %d ", i, j, i*j);
//		}
//		printf("\n");
//
//	}
//	system("pause");
//	return 0;
//}

//2.ʹ�ú���ʵ���������Ľ���

//void Exchange(int* i,int* j)
//{
//	int temp = 0;
//	temp = *i;
//	*i = *j;
//	*j = temp;
//}
//int main()
//{
//	int i =0 ;
//	int j = 0;
//	printf("�����뽻����������ֵ��");
//	scanf("%d%d", &i, &j);
//	Exchange(&i, &j);
//	printf("i=%d j=%d",i,j);
//	system("pause");
//	return 0;
//}

//3.����ʵ��������ж�

//void Judge(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year=0;
//	int ret = 0;
//	scanf("%d", &year);
//	Judge(year);
//	if (0 == ret)
//	{
//		printf("��������\n" );
//	}
//	else
//	{
//		printf("������\n");
//	}
//	system("pause");
//	return 0;
//}

//4.����һ�����飬 ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��


//void Init(int arr[], int len, int enter)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr[i] = enter;
//	}
//}
//
//void Empty(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void Exchange(int arr[], int len)
//{
//	int i = 0;
//	int start = 0;
//	int end = len - 1;
//	while(start < end)
//	{
//		int tmp = arr[start];
//		arr[start] =arr[end];
//		arr[end] = tmp;
//		start++;
//		end--;
//	}
//}
//
//void Print(int arr[], int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int len = 10;
//	int  arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int enter = 6;
//	Print(arr, len);
//	printf("\n");
//	Exchange(arr, len);
//	Print(arr, len);
//	printf("\n");
//	Init(arr, len, enter);
//	Print(arr, len);
//	printf("\n");
//	Empty(arr, len);
//	Print(arr, len);
//	printf("\n");
//	system("pause");
//	return 0;
//}

//5.ʵ��һ���������ж�һ�����ǲ�������

int Judge(int i)
{
	int n = 0;
	for (n = 2; n <= i / 2; n++)
	{
		if (i%n == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	printf("������Ҫ�жϵ�����");
	scanf("%d", &i);
	if (Judge(i))
	{
		printf("%d������\n",i );
	}
	else
	{
		printf("%d��������\n",i);
	}

	system("pause");
	return 0;
}

