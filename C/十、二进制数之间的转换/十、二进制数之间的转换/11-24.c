#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//十进制数转二进制数

//int main()
//{
//	int num = 0;
//	int arr[32] = { 0 };
//	int i = 0, k = 0;
//	printf("请输入十进制的整数：");
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		k= num % 2;
//		arr[i] = k;
//		i++;
//		num = num / 2;
//	}
//	for (i=32-1; i >=0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


//int main()
//{
//int num = 0;
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


int main()
{
	int n = 0;
	char c;
	printf("请输入一个二进制数：");
	scanf("%c", &c);     
	while (c == '0' || c == '1')  
	{
		printf("%c", c);

		n = (n << 1) + c - '0';//字符'0',ASCII为48
		//一次(每读取一个数字)向左移一位，c为每一次读取的数字的ASCII值
		//由于ASCII表中0的值是48,1的值是49，而此处c只有可能是49或48；
		//即当前的c若是1，则n的二进制形式在左移一位的同时，右边补上一个1，若是0，同理，补上一个0；

		scanf("%c", &c);    
	}
	printf("的十进制数是%d\n", n);   
	system("pause");
	return 0;
}
