#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>

int get_Peach(int day)
{
	if (day == 1)
	{
		return 2;
	}
	else
	{
		return 2 * (get_Peach(day - 1) + 2);
	}
}

int get_Peach_Loop(int day)
{
	int i = 1;
	int peach_num_Loop = 0;
	for (i = 1; i <= 10; i++)
	{
		peach_num_Loop = 2 * (peach_num_Loop + 2);
	}
	return peach_num_Loop;
}

int main()
{
	int day = 0, peach_num = 0, peach_num_Loop = 0;
	printf("请输入天数： ");
	scanf("%d", &day);
	peach_num = get_Peach(day);
	peach_num_Loop = get_Peach_Loop(day);
	printf("猴子共摘了%d个桃子 ", peach_num);
	printf("\n猴子共摘了%d个桃子 ", peach_num_Loop);
	system("pause");
	return 0;
}