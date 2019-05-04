#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*1.编写函数： 
unsigned int reverse_bit(unsigned int value);
这个函数的返回值value的二进制位模式从左到右翻转后的值。

如：
在32位机器上25这个值包含下列各位：
00000000000000000000000000011001
翻转后：（2550136832）
10011000000000000000000000000000
程序结果返回：
2550136832*/


void Reverse(int arr[], int len)
{
	int i = 0;
	for (i = 0; i <= len / 2; i++)
	{
		Swap(arr + i, arr + len - 1 - i);
	}
}

int Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	return 0;
}

int Binary(int arr[], int len, int n)
{
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		n = (n << 1) + i - '0';
		scanf("%d", &i);
	}
	return n;
}

void Print(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		printf("%d", arr[i]);
		}
	printf("\n");
 }

int main()
{
	int num = 0;
	int arr[32] = {0};
	int i = 0;
	unsigned int tmp = 0;
	int sum = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("请您输入要转换的整数：");
	scanf("%d", &num);
	printf("逆置后为：\n");
	for (i = 0; i < 32; i++)
	{
		arr[i] = num & 1;
		num >>= 1;
		printf("%d", arr[i]);
	}
	/*for (i = 0; i < 32; i++)
	{
	int tmp = (unsigned int)pow(2, i)*arr[31-i];
		sum += tmp;
	}*/
	printf("\n");
	Reverse(arr, sz);
	printf("该整数的二进制形式为（32bit）：\n");
	Print(arr,sz);
	Binary(arr, sz, num);
	printf("翻转后的十进制数为：%d\n");
	system("pause");
	return 0;
}

//十进制数转化为32Bit的二进制数：
//int main()
//{
//	int num = 0;
//	int arr[50] = { 0 };
//	int tmp = 0;
//	unsigned int i;
//	printf("请输入一个整数:");
//	scanf("%d", &num);
//	for (i = 0x80000000; i; i >>= 1)  //0x80000000实际代表的值是 -0x80000000（所以说既是源码也是补码）,int类型表示的最小值
//	{
//		tmp = ((num & i) == i);
//		printf("%d",tmp);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//2.不使用（a + b） / 2这种方式，求两个数的平均值

//int main()
//{
//	int i = 0, j = 0;
//	int average1 = 0;
//	int average2 = 0;
//	printf("请输入俩个数：");
//	scanf("%d%d", &i, &j);
//	//二进制位相与
//	average1 = i - (i - j) / 2;
//	average2 = (i&j) + ((i^j) >> 1);
//	printf("average1=%d\naverage2=%d\n", average1, average2);
//	system("pause");
//	return 0;
//}


/*3.编程实现： 
一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
请找出这个数字*/

//int main()
//{
//	int arr[] = {0,1,2,3,4,9,0,3,4,2,1};
//	int i = 0;
//	int len = 0;
//	printf("请输入要查找的数列：");
//	len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i< len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("单个的数字是：%d\n",arr[0]);
//	system("pause");
//	return 0;
//}