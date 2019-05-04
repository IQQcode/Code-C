#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//1.猜数字游戏：

//void menu()
//{
//	printf("****************************\n");
//	printf("*******   1.Play.   ********\n");
//	printf("*******   0.Exit.   ********\n");
//	printf("****************************\n");
//	printf("\n\n");
//
//}
//
//void game()
//{
//	int num = 0;
//	int guess = 0;
//	//printf("猜数字游戏，很好玩的哟！\n");
//	//1.生成一个随机数；
//	//设置随机数的生成起点
//	num = rand()%100+1;
//	//printf("%d\n", num);
//
//	while (1)
//	{
//		printf("\n");
//		printf("猜数字>>-:");
//		scanf("%d",&guess);
//		if (guess > num)
//			printf("猜大了^-^\n\n");
//		else if (guess < num)
//			printf("猜小了*-*\n\n");
//		else
//		{
//			printf("恭喜你，猜对了！呵呵……\n");
//			printf("可以去买彩票了#/\#……\n\n\n");
//			break;
//			//menu();
//		}
//	}
//
//	//2.猜数字；
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));  //代码中只需调用一次即可；
//
//	do {
//		menu();
//		printf("请选择>->:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//				break;
//		case 0:
//			printf("退出游戏！！！\n");
//					break;
//				default:
//					printf("选择错误，请重新输入……\n");
//						break;
//		}
//	} while (input);
//
//	system("pause");
//	return 0;
//}



//2.二分查找：

binary_search(int arr[], int tab, int left, int right)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > tab)
		{
			right=mid - 1;
		}
		else if (arr[mid] < tab)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}


int main()
{
	int arr[20] = { 0 };
	int i = 0;
	int find = 7;
	int ret = 0;
	int left = 0;
	//int sz =( sizeof(arr) / sizeof(arr[0]));
	int right = (sizeof(arr) / sizeof(arr[0]) - 1);

	printf("arr=");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}

	ret = binary_search(arr, find, left, right);
	if (-1 == ret)
	{
		printf("找不到^-^!\n");
	}
	else
	{
		printf("找到了，下标为%d\n", ret);
	}

	system("pause");
	return 0;

}


//4.大小写转换：
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//
//	if (ch >= 'A'&&ch <= 'Z')
//	{
//		ch = (ch + 32);
//		printf("%c", ch);
//	}
//
//	else if(ch >= 'a'&&ch <= 'z')
//	{
//		ch = (ch - 32);
//		printf("%c", ch);
//
//	}
//
//	system("pause"); 
//	return 0;
//}


//3.编写代码模拟三次密码输入的场景
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码>>-:");
//		scanf("%s", password);
//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确，登陆成功！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入！^-^\n\n");
//		}
//	}
//	if (3 == i) 
//	{
//		printf("三次密码错误，登录失败！\n");
//	}
//
//	system("pause");
//	return 0;
//}