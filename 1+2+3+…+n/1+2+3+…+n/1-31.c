#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>

int recursion(int n)
{
	if (n == 1)
		return 1;
	else
		return (recursion(n - 1) + n);
}

int add(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}


int main()
{
	int n;
	printf("n = ");
	scanf("%d", &n);
	printf("�ݹ���Ϊ  %d\n", recursion(n));
	printf("�ǵݹ���Ϊ  %d\n", add(n));
	system("pause");
	return 0;
}
