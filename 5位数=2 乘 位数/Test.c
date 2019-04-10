#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>

int judge(int n, int m) 
{
	int a[10] = { 0 };
	int count = 0;
	int i;
	do {
		a[n % 10] = 1;
		n = n / 10;
		a[m % 10] = 1;
		m = m / 10;
	} while (n || m);   //以数组下标作为对应数字进行统计标记
	for (i = 0; i <= 9; i++) {
		if (a[i] == 1) 
			count++;
	}
	return count - 1;
}
int main() 
{
	int i, j;
	int count;
	for (i = 5000; i < 9999; i++)  //2需要乘上至少5000的数才能等于五位数
		for (j = 10000; j < 20000; j++) {
			count = judge(i, j);
			if (count == 9 && 2 * i == j)
				printf("%d %d\n", i, j);
		}
	system("pause");
	return 0;
}
