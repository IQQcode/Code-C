#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// 10 -> 2
void Binary_Exchange(int a)
{
	int arr1[50] = { 0 };
	int tmp = 0;
	unsigned int i;
	printf("The Binary number is :");
	for (i = 0x80000000; i; i >>= 1)
		//0x80000000实际代表的二进制值是1000,0000,0000,0000,0000,0000,0000,0000
		//是在把十六进制表示的0x80000000和传递过来的num 的值进行位运算 &;
		//int类型表示的最小值
	{
		tmp = ((a & i) == i);
		printf("%d", tmp);
	}
}

// 10 -> 8
void Octal_Exchange(int m)
{
	int temp = 0;
	if (m == 0)
		return;

	temp = m % 8;
	Octal_Exchange(m /= 8);
	printf("%d", temp);
}

// 10 -> 16
int Hexa_Exchange(int a)
{
	int i = 0;
	int count = 0, temp = 0;
	char arr[20] = { 0 };
	temp = a;
	while (temp)
	{
		arr[i] = temp % 16;
		temp /= 16;
		count++;
	}
	for (i = 0; i < count; i++)
	{
		if (arr[i] > 9)
		{
			arr[i] += 7;
		}

		arr[i] += '0';
	}
	printf("The Hexa   number is :%s\n", arr);

	return a;
}


//int Hexa_Exchange(int a)
//{
//	char Hex[16] = "0123456789ABCDEF";
//	if (!a)return;
//	Hexa_Exchange(a / 16);
//	printf("%c", Hex[a % 16]);
//}




int main()
{
	int num = 0;
	char arr[] = { 0 };
	int i = 0, size = 0;
	int n = 0, temp = 0;
	printf("请输入要转化的数：");
	//scanf("%s", &num);
	gets(arr);

	size = strlen(arr);
	printf("请输入该数的进制(2、8、16)：");
	scanf("%d", &n);
	for (i = 0; i < size; i++)
	{
		if (arr[i] >= '0' && arr[i] <= '9')
		{
			temp = arr[i] - '0'; //字符类型转换为数字
		}
		else if (arr[i] >= 'A' && arr[i] <= 'F')
		{
			temp = arr[i] - 'A' + 10; //十六进制字符转化为数字
		}
		num = num * n + temp;
	}
	

    Binary_Exchange(num);
	printf("\n");

	printf("The Octal  number is :");
	Octal_Exchange(num);

	printf("\nThe Dec    number is :%d", num);
	printf("\n");

	Hexa_Exchange(num);
	printf("\n");

	system("pause");
	return 0;
}











//#include <stdio.h>
//int main()
//{
//	int n;
//	printf("请输入一个十进制数：\n");
//	scanf("%d", &n);
//	unsigned int i = 1u << 15;
//	for (; i; i >>= 1) {
//		printf("%d", n&i ? 1 : 0);
//	}
//	printf("\n");
//	return 0;
//}
//
//
//上述代码用的是移位，用这个方法，代码中的i必须用unsigned int 无符号整型来表示，
//初始化i = 1, 后面的u表示的就是unsigned，
//<< 15表示向左移位15个bit
//（本代码输出的是十六位的二进制数，如果想输出32位的二进制数，只需将15变为31即可）
//将0000000000000001中的1向左移位15就得到了1000000000000000，接下来就是for循环，
//就是单纯的让1慢慢向后移一位，例如第二次循环就变为了0100000000000000，
//同理下去。&表示的是按位与运算符。
