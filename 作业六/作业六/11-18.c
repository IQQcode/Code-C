#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//1.打印乘法口诀表：
int main()
{
	int i = 0;
	int j = 0;
	int line = 0;
	printf("请输入要打印的行和列：");
	scanf("%d", &line);
	for (i = 1; i <= line; i++)
	{

		for (j = 1; j <= line; j++)
		{
			printf("%d * %d = %d ", i, j, i*j);
		}
		printf("\n");

	}
	system("pause");
	return 0;
}

//2.使用函数实现两个数的交换

void Exchange(int i,int j)
{
	int temp = 0;
	temp = i;
	i = j;
	j = temp;
}
int main()
{
	int i = 0, j = 0;
	printf("请输入交换的俩个数值：");
	scanf("%d%d", &i, &j);
	Exchange(i, j);
	printf()
	system("pause");
	return 0;
}
