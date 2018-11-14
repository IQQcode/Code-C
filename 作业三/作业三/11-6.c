#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//计算：1/1 - 1/2 + 1/3 -1/4......+1/99 - 1/100
int main()
{
	double i = 0.0, sum = 0.0, term = 1.0;
	int flag = 1;
	while (fabs(term) >= 1e-6)
	{
		sum += term;
		i++;
		flag = -flag;
		term = flag / i;

	}
	printf("sum=%10.8f\n", sum);

	system("pause");
	return 0;
}




//交换俩个数组的内容：
/*int main()
{
	int i = 0;
	int temp = 0;
	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[10] = {0};

	for (i = 0; i<10; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	printf("arr1=");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2=");

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	system("pause");
	return 0;
}*/


//统计1到100中9出现的个数：
//代码分析：9，90，99可以整除9；29-89的个位为9
//int main()
//{
//	int i = 0;
//	int count = 0;
//		for(i = 1; i <= 100; i++)
//		{
//			if (i % 10 == 9)
//			{
//				count++;
//				printf("%3d", i);
//			}
//			
//			if (i / 10 == 9)
//			{
//				count++;
//				printf("%3d", i);
//			}
//
//		}
//		printf("\n");
//	printf("count=%d", count);
//
//	system("pause");
//	return 0;
//}