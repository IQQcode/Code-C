#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//斐波那契数列：
//int main()
//{
//	int f1 = 1, f2 = 1;
//	int f3;
//	int i = 0;
//	printf("%d\n%d\n", f1, f2);
//	for (i = 0; i < 40; i++)
//	{
//		f3 = f1 + f2;
//		printf("%d\n", f3);
//		f1 = f2;
//		f2 = f3;
//	}
//	system("pause");
//	return 0;
//}
//
int main()
{
	int f1 = 1, f2 = 1;
	int i = 0;
	for (i = 0; i < 20; i++)   // i循环一次可以求出2个Fibonacci数，如果i太大则会溢出
	{
		printf("%12d%12d", f1, f2);
		if (i % 2 == 0)       //if语句的作用是使输出4个数后换行。由于每次循环要输出2个数(f1、f2)
		{                    // i为偶数时就输出了4个数，即一行输出4个数
			printf("\n");
		}
		f1 = f1 + f2;
		f2 = f1 + f2;
	}
	system("pause");
	return 0;
}


/*非递归调用函数*/
//f1(1) = f(2) = 1
//f(n) = f(n - 1) + f(n - 2)
//int fab(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//
//	int fn = 0;
//	int i = 0;
//
//	int fn1 = 1;
//	int fn2 = 1;
//	for (i = 3; i <= n; i++)
//	{
//		f(n) = f(n - 1) + f(n - 2)
//		fn = fn1 + fn2;
//		f(n - 2) = f(n - 1)
//		fn1 = fn2;
//		f(n - 1) = f(n)
//		fn2 = fn;
//	}
//	return fn;
//}
//
//*递归*/
//int fab_r(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	return fab_r(n - 1) + fab_r(n - 2);
//}
//
//int main()
//{ 
//
//	int n;
//	scanf("%d", &n);
//
//	printf("%d\n", fab(n));
//	printf("%d\n", fab_r(n));
//	system("pause");
//	return 0;
//}
//
