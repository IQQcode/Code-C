#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//1.打印乘法口诀表：
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int line = 0;
//	printf("请输入要打印的行和列：");
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

//2.使用函数实现两个数的交换

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
//	printf("请输入交换的俩个数值：");
//	scanf("%d%d", &i, &j);
//	Exchange(&i, &j);
//	printf("i=%d j=%d",i,j);
//	system("pause");
//	return 0;
//}

//3.函数实现闰年的判断

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
//		printf("不是闰年\n" );
//	}
//	else
//	{
//		printf("是闰年\n");
//	}
//	system("pause");
//	return 0;
//}

//4.创建一个数组， 实现函数init（）初始化数组、实现empty（）清空数组、实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。


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

//5.实现一个函数，判断一个数是不是素数

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
	printf("请输入要判断的数：");
	scanf("%d", &i);
	if (Judge(i))
	{
		printf("%d是素数\n",i );
	}
	else
	{
		printf("%d不是素数\n",i);
	}

	system("pause");
	return 0;
}

