#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#define N 5 	//������
#define M 3 	//����3����
typedef struct {
	int num;   // ��λ��� 
	char name[20];
	int count;  // ������� 
}Josephus;
void baoshu(Josephus man[], int n, int m)  //
{
	int counter = 1;  //���м����� 
	int i = 0;   //���������� 
	int pos = -1;  //λ�ü����� 

	while (counter <= n) //��N������ģ��ѭ������
	{
		do {
			pos = (pos + 1) % n;	//���࣬���л�״����������������� Nֵ���ִ�1��ʼ 
			if (man[pos].count == 0)	//�����pos��δ����
				i++;        //���� 
			if (i == m)	//����M���� 
			{
				i = 0;    //��ʼ�����������ִ�1��ʼ���� 
				break;
			}
		} while (1);
		man[pos].count = counter;  //���������� 
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
		man[i].count = 0;  //������е���ţ�Ϊ0��ʾδ���� 
	}
}

void display_Josephus(Josephus man[], int n)
{
	int i;
	printf("Լɪ������(���λ��--����--Լɪ��λ��):\n"); 	//�������λ��
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
	printf("\n����λ˳�����У�\n");
	display_Josephus(man, N);
	sort_by_count(man, N);
	printf("\n������˳�����У�\n");
	display_Josephus(man, N);

	getchar();
	return 0;
}
