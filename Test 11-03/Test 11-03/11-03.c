//加法函数
//#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>

int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{

	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入俩个操作数：");
	scanf("%d %d", &num1, &num2);
	sum = Add(num1, num2);
	printf("sum=%d", sum);

	system("pause");
	return 0;
}



























//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%5d", i);
//	}
//	system("pause");
//	return 0;
//
//	
//}