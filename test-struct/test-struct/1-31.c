#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>

/*	只有10分,5分, 2分，1分的硬币;
顾客付款X分,商品价格y分。
问，如何找零钱，使得找的硬币数最少*/

int a = 0, b = 0, c = 0, d = 0;

int num(int n)
{
	if (n >= 10)
	{
		a++;
		n = n - 10;
		num(n);
		return 0;
	}
	if (n >= 5)
	{
		b++;
		n = n - 5;
		num(n);
		return 0;
	}
	if (n >= 2)
	{
		c++;
		n = n - 2;
		num(n);
		return 0;
	}
	if (n == 1)
	{
		d++;
		n = n - 1;
		num(n);
		return 0;
	}
	if (n == 0)
		return 0;
}

int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	num(x - y);
	printf("10$:%d\n5 $:%d\n2 $:%d\n1 $:%d\n", a, b, c, d);
	system("pause");
	return 0;
}

