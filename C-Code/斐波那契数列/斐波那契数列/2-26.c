#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>

//·ÇµÝ¹é
//int main()
//{
//	int fab1 = 1, fab2 = 1;
//	int i = 0,fab3 = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%12d%12d", fab1, fab2);
//		fab3 = fab1 + fab2;
//		if (i % 2 == 0)
//		{
//			printf("\n");
//		}
//		fab1 = fab1 + fab2;
//		fab2 = fab1 + fab2;
//	}
//	system("pause");
//	return 0;
//}

int main()
{
	int fab;
	scanf("%d", &fab);
	//printf("%d\n", Fn(fab));
	printf("%d\n", Fn_r(fab));
	system("pause");
	return 0;
}

int Fn(int n)
{
	int sum = 0;
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		int fb1 = 1;
		int fb2 = 1;
		for (int i = 3; i <= n; i++)
		{
			sum = fb1 + fb2;
			fb1 = fb2;
			fb2 = sum;
		}
		return sum;
	}
}  

//µÝ¹é
int Fn_r(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return Fn_r(n - 1) + Fn_r(n - 2);
}