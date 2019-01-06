#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>





//ÇóËØÊý
//int main()
//{
//	int i = 0, n = 0;
//
//	for(i = 1; i <=200 ; i+=2)
//	{
//		for (n = 2; n <= sqrt(i); n++)
//		{
//			if (0 == i % n)
//				break;
//		}
//		if (n > sqrt(i))
//		{
//			printf("%5d", i);
//		}
//	}
//
//	system("pause");
//	return 0;
// }


//¼ÆËã 1- 1/2 + 1/3 - 1/4 + 1/5......
//int main()
//{
//	int flag = 1, n = 0;
//	double i = 1.0, sum = 0.0, term = 1.0;
//	for (i = 0; i <= n; i++)
//	{
//		sum += term;
//		i++;
//		flag = -flag;
//		term = flag / i;
//	}
//	printf("sum=%10.8f\n", sum);
//
//	system("pause");
//	return 0;
//}