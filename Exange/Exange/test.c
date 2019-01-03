#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Exchange(int a, int power)
{
	int count = 0;
	char str[100] = { 0 };
	int len = 0;
	while (a)
	{
		str[count] = a % power;

		a /= power;

		str[count] += '0';

		if(str[count] > '9')
			{
				str[count] += 7;
			}
			count++;
			len = count;
	}

	for (int i = 0; i <= len/2; i++)
	{
		char tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		printf("str[i] = %c", str[i]);
		printf("str[len-1-i] = %c", str[len-1-i]);


	}
	
	printf("%s\n",str);
}

int main()
{
	int num = 0;
	char arr[] = { 0 };
	int i = 0, size = 0;
	int n = 0, temp = 0;
	printf("请输入要转化的数：");
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
		else if (num >= 10 && (arr[i] >= 'A' && arr[i] <= 'A' + num - 10))
		{
			temp = arr[i] - 'A' + 10; //十六进制字符转化为数字
		}
		num = num * n + temp;
	}
	printf("The Dec number is %d\n", num);
	Exchange(num, 2);
	Exchange(num, 8);
	Exchange(num, 10);
	Exchange(num, 16);
	system("pause");
	return 0;
}