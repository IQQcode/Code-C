#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//1.��ӡ�˷��ھ���
int main()
{
	int i = 0;
	int j = 0;
	int line = 0;
	printf("������Ҫ��ӡ���к��У�");
	scanf("%d", &line);
	for (i = 1; i <= line; i++)
	{

		for (j = 1; j <= line; j++)
		{
			printf("%d * %d = %d ", i, j, i*j);
		}
		printf("\n");

	}
	system("pause");
	return 0;
}

//2.ʹ�ú���ʵ���������Ľ���

void Exchange(int i,int j)
{
	int temp = 0;
	temp = i;
	i = j;
	j = temp;
}
int main()
{
	int i = 0, j = 0;
	printf("�����뽻����������ֵ��");
	scanf("%d%d", &i, &j);
	Exchange(i, j);
	printf()
	system("pause");
	return 0;
}
