#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//A、B、C拥有的机器数和盈利情况的对应关系
	int A[6] = { 0,3,7,9,12,13 };
	int B[6] = { 0,5,10,11,11,11 };
	int C[6] = { 0,4,6,11,12,12 };

	int AB[6][6];//A、B分配到n个机器时的盈利情况
	int AB_Max[6];//A、B分配到n个机器时的最大盈利情况
	int abc[6];//增加C工厂后的盈利情况
	int max;
	int flag;
	int i, j, k;

	//A、B共分配到i个机器时的最大盈利
	for (i = 0; i <= 5; i++)//i为分配给A B的总机器数，j为分配给B工厂的机器数
	{
		max = 0;
		for (j = 0; j <= i; j++)
		{
			AB[i][j] = A[i - j] + B[j];
			if (AB[i][j] > max)
				max = AB[i][j];
		}
		AB_Max[i] = max;
	}

	//增加c工厂后，将5台机器分配给A B C时最大盈利
	max = 0;
	for (j = 0; j <= 5; j++)//j为分配给C工厂的机器数,5-j为分配给A B的总机器数
	{
		abc[j] = AB_Max[5 - j] + C[j];
		if (abc[j] > max)
		{
			max = abc[j];
			flag = j;
		}
	}

	printf("最大盈利为：%d\n", max);
	printf("C工厂分配的机器数量为：%d\n", flag);
	max = max - C[flag];
	int AB_Num = 5 - flag;

	for (i = 0; i <= AB_Num; i++)//i为分配给B工厂的机器数
	{
		if (AB[AB_Num][i] == max)
		{
			printf("B工厂分配的机器数量为：%d\n", i);
			printf("A工厂分配的机器数量为：%d\n", AB_Num - i);
			break;
		}
	}
	system("pause");
	return 0;
}
