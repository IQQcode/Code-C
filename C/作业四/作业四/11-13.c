#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>

//打印图案
//int main()
//{
//	 int i = 0,j=0;
//	 int line = 0;
//	 printf("请输入要输的三角数：");
//		 scanf("%d", &line);
//		 printf("\n");
//	//打印上三角
//	for (i = 1; i <= line; i++)
//	{
//		//打印空格
//		for (j = 1; j <= line-i; j++)
//		{
//			printf(" ");
//		}
//		//打印 *
//		for (j = 1; j <= 2*i-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//打印倒三角
//	for (i = 1; i <= line; i++)
//	{
//		//打印空格
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 1; j <= 2 * (line - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//
//}



//打印水仙花数
//int main()
//{
//	int a, b, c,i = 0;
//	int x=0,y=0;
//	for (x = 100; x <= 999; x++) 
//	{
//			a = x % 1000 / 100;
//			b = x % 100 / 10;
//			c = x % 10 / 1;
//			y = a * a * a + b * b * b + c * c * c;
//			if (y == x) 
//			{
//				printf("%d", x);
//				i++;
//				printf("\n");
//
//			}
//	}
//	printf("\n");
//		printf("水仙花数量为:%d\n", i);
//
//		system("pause");
//		return 0;
//
//}
  

//求 Sn = a + aa + aaa + aaaa +aaaaa(前5项和)
int main()
{
	int a = 0;
	int i = 0, Sn = 0;
	scanf("%d", &a);
	while(i<5)
	{
		int temp = a;
		a = a * 10 + 2;
		Sn = Sn+temp ;
		printf("%d  ", temp);
		i++;
	}
	printf("Sn=%d", Sn);
	system("pause");
	return 0;
}