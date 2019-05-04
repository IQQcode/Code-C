#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a[10] = { 0 };
	int b[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &b[i]);
	}
	//交换数组元素
	for (i = 0; i <= 10; i++)
	{
		int temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	for (i = 0; i <10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i <10; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}