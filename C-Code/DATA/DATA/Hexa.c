#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<ctype.h>
int main()
{
	int a;
	printf("please input number(10):\n");
	scanf("%d", &a);
	int s, temp;
	int y[10];
	int i = 0;
	int count = 0;
	if (a < 16)
	{
		f(a);
	}
	else
	{
		while (a != 0)
		{
			count = i;
			y[i] = a % 16;
			temp = a / 16;
			a = temp;
			i++;
		}
		for (i = count; i >= 0; i--)
		{
			f(y[i]);
		}
	}
}
void f(int num)
{
	char y1[16] = { '0','0','0','0','0','0','0','0','0','0','a','b','c','d','e','f' };
	if (isdigit(num + '0'))
	{
		printf("%d", num);
	}
	else
	{
		printf("%c", y1[num]);
	}
}
