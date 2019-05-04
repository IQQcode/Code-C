#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#define N 5 	//总人数
#define M 3 	//数到3出列
typedef struct {
	int num;   // 座位序号 
	char name[20];
	int count;  // 出列序号 
}Josephus;
void baoshu(Josephus man[], int n, int m)  //
{
	int counter = 1;  //出列记数器 
	int i = 0;   //报数记数器 
	int pos = -1;  //位置记数器 

	while (counter <= n) //在N个人中模拟循环报数
	{
		do {
			pos = (pos + 1) % n;	//求余，进行环状处理，如果记数器超过 N值，又从1开始 
			if (man[pos].count == 0)	//若编号pos还未出列
				i++;        //报数 
			if (i == m)	//报数M的人 
			{
				i = 0;    //初始化记数器，又从1开始报数 
				break;
			}
		} while (1);
		man[pos].count = counter;  //保存出列序号 
		counter++;
	}

}
void init_Josephus(Josephus man[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		man[i].num = i + 1;
		gets(man[i].name);
		man[i].count = 0;  //保存出列的序号，为0表示未出列 
	}
}

void display_Josephus(Josephus man[], int n)
{
	int i;
	printf("约瑟夫排列(最初位置--姓名--约瑟夫环位置):\n"); 	//输出排列位置
	for (i = 0; i < N; i++)
	{
		printf("%d--%s--%d\n", man[i].num, man[i].name, man[i].count);
	}
}
void sort_by_count(Josephus man[], int n)
{
	int i, j;
	Josephus t;
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (man[i].count > man[j].count)
			{
				t = man[i], man[i] = man[j], man[j] = t;
			}
		}
	}
}

int main()
{
	Josephus man[N];

	init_Josephus(man, N);
	baoshu(man, N, M);
	printf("\n按座位顺序排列：\n");
	display_Josephus(man, N);
	sort_by_count(man, N);
	printf("\n按出列顺序排列：\n");
	display_Josephus(man, N);

	getchar();
	return 0;
}
