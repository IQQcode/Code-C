#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int a[20] = { 0 }, b[20] = { 0 }, c[40] = { 0 }, d[40] = { 0 };
int i = 0, j = 0, k = 0;
int n = 0, t = 0;

void output()
{
	t = t + 1;
	printf("%d ", t);
	for (k = 1; k <= n; k++)
	{
		printf("%d ", a[k]);
	}
	printf("\n");
}

void try()
{
	int j = 0;
	for (i = 1; j <= n; j++)
	{
		if (b[j] == 0 && c[i + j] == 0 && d[i - j + n] == 0)
		{
			a[i] = j;
			b[i] = 1;
			c[i + j] = 1;
			d[i - j + n] = 1;

			if (i < n)
			{
				try(i + 1);
			}
			else
			{
				
			}

			b[j] = 0;
			c[i + j] = 0;
			d[i - j + n] = 0;
		}
	}
}



int main()
{
	printf("亲输入皇后个数：");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		b[i] = 0;
		c[i] = 0; c[n + i] = 0;
		d[i] = 0; d[n + i] = 0;

	}
	try();
	system("pause");
	return 0;
}