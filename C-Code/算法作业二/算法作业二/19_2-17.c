#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

/*

 11.编程判定从键盘上输入的n个数是否互不相等
 
 */
//int main()
//{
//	int a[100] = { 0 };
//	int i, j, t, n, k;
//	printf("请输入要输入数的个数：");
//	scanf("%d", &n);
//	printf("请输入数字：");
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	for (i = 1; i <= n - 1; i++)
//		for (j = i + 1; j <= n; j++)
//			if (a[i] == a[j])
//			{
//				t = 0;
//				k = i;
//				break;
//			}
//	if (t == 1)
//		printf("No repeat!\n");
//	else
//		printf("Repeat!\n The repeat number is:%d\n", a[k]);
//
//	system("pause");
//	return 0;
//}


/*

12.	求任给的两个数的最小公倍数和最大公约数

*/

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("请输入要求最大公因数的俩个数值：\n");
//	scanf("%d %d", &m, &n);
//	while (n % m)
//	{
//		r = n % m;
//		n = m;
//		m = r;
//	}
//	printf("俩数的最大公因数是：%d\n", m);
//
//	system("pause");
//	return 0;
//
//}


/*

13.	编写程序对任给的一个整数n,判断它能否被3,5,7整除。输出下面信息之一。
    能同时被3,5,7整除
    能同时被其中两个数整除，要具体指出哪两个数。
    能被其中一个数整除,要具体指出被哪一个数整除
    不能被上述任一个数整除

*/

//int main()
//{
//	int a, b, c;
//	printf("请输入一个整数。\n");
//	scanf("%d", &a);
//	if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0)
//		printf("能同时被3、5、7整除。\n");
//	else
//	{
//		if ((a % 3 != 0 && a % 5 == 0 && a % 7 == 0) || 
//			(a % 3 == 0 && a % 5 != 0 && a % 7 == 0) || 
//			(a % 3 == 0 && a % 5 == 0 && a % 7 != 0))
//		{
//			if (a % 3 != 0 && a % 5 == 0 && a % 7 == 0)
//			{
//				b = 5; c = 7;
//			}
//			else if (a % 3 == 0 && a % 5 != 0 && a % 7 == 0)
//			{
//				b = 3; c = 7;
//			}
//			else if (a % 3 == 0 && a % 5 == 0 && a % 7 != 0)
//			{
//				b = 3; c = 5;
//			}
//			printf("能同时被3、5、7中的两个数整除，且这两个数为%d和%d。\n", b, c);
//		}
//		else if ((a % 3 != 0 && a % 5 != 0 && a % 7 == 0) || 
//			     (a % 3 == 0 && a % 5 != 0 && a % 7 != 0) ||
//			(a % 3 != 0 && a % 5 == 0 && a % 7 != 0))
//
//		{
//			if (a % 3 != 0 && a % 5 != 0 && a % 7 == 0)
//				b = 7;
//			if (a % 3 == 0 && a % 5 != 0 && a % 7 != 0)
//				b = 3;
//			if (a % 3 != 0 && a % 5 == 0 && a % 7 != 0)
//				b = 5;
//			printf("能同时被3、5、7中的一个数整除，且这两个数为%d。\n", b);
//		}
//
//		else
//			printf("不能被3、5、7中任何一个数整除。\n");
//	}
//	system("pause");
//	return 0;
//}

/*

//17.	输入N个整数及一个K值(整数)。
//打印K值第一次出现是第几个数，如果不出现打印-1
//
//*/
//
//int main()
//{
//	int num[50] = {0};
//	int n, i, temp, position = 0;
//	printf("请输入N的个数：");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	printf("请输入k值：");
//	scanf("%d", &temp);
//
//	for (i = 0; i < n; i++)
//	{
//		if (num[i] == temp) 
//		{
//			position = i + 1;
//			break;
//		}
//		else 
//		{
//			position = -1;
//		}
//	}
//	printf("\n%d", position);
//	system("pause");
//	return 0;
//}


/*

18.	将数n反置。例如123变成321。1234变成4321

*/

//int main()
//{
//	int inum, n;
//	while (1)                       //运用两层循环主要是为了增加一个负数检测功能
//	{
//		printf("请输入一个正整数：");
//		scanf("%d", &inum);
//		printf("\n");
//		if (0 > inum)               //输入为负数是，跳到循环开始，重新来过。
//		{
//			continue;
//		}
//		while (0 < inum)            //输出反序数
//		{
//			n = inum % 10;
//			printf("%d", n);
//			inum = inum / 10;
//		}
//		break;                    // 结束循环
//	}
//	system("pause");
//	return 0;
//}


/*

19.	字符使用频率统计,从键盘逐一输入一本英文小说的每个字符
统计其中a出现的频率，b出现的频率,……..等等(大小写视同);

*/


//int main()
//{
//	char str[100] = { 0 };
//	char c = 0;
//	int j, k, count = 0;
//	printf("Please input a string:");
//	scanf("%s", str);
//	c = 'a';
//	for (j = k = 0; str[j] != '\0'; j++)
//	{
//		if (str[j] != c)
//		{
//			str[k++] = str[j];
//		}
//		else
//		{
//			count++;
//			str[k] = '\0';
//		}
//	}
//	printf("\n%d",count);
//	system("pause");
//	return 0;
//}


/*

20.	输入min,max,factor三个整数,
  输出闭区间[min,max]上能被factor整除的数的个数

*/

int main() 
{
	int min, max, factor;
	scanf("%d%d%d", &min, &max, &factor);
	int i;
	for (i = min; i <= max; i++) 
	{
		if (i%factor == 0) 
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
