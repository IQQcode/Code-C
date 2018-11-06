#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void test()
{
	static int n = 0;                //int n = 0;
	n++;
	printf("%3d", n);
}
int main()
{
	int i = 0;
	for(i=0; i<10; i++)
	{
		test();

	}
	system("pause");
	return 0;
}



//int main()
//	{
//	int i = 0;
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 9, 10 };
//	for (i = 0; i <= sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		arr[i]=0;
//	}
//
//	for (i = 0; i <= sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%2d",arr[i]);
//	}
//	printf("\n");
//
//	system("pause");
//	return 0;
//	}



//int main()
//{
//	int i = 0;
//	int arr[10] = { 1 ,2 ,3 ,4 ,5 ,6, 7, 8, 9, 10 };
//	for (i = 0; i < 10; i++)
//		for (i = 0; i <sizeof(arr)/sizeof(arr[0]); i++)      //for (i = 0; i < 10; i++)
//	{
//		printf("%3d", arr[i]);
//	}
//	printf("\n");
//
//  system("pause");
//   return 0;
//}




////加法函数
//#define _CRT_SECURE_NO_WARNINGS 1 
//#include<stdio.h>
//#include<stdlib.h>
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入俩个操作数：");
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum=%d", sum);
//
//	system("pause");
//	return 0;
//}
//



//#include<stdio.h>
//#include<stdlib.h>
//int main(void)
//{
//	int i = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%5d", i);
//	}
//	system("pause");
//	return 0;
//
//	
//}