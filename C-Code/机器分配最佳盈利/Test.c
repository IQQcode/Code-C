#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//A��B��Cӵ�еĻ�������ӯ������Ķ�Ӧ��ϵ
	int A[6] = { 0,3,7,9,12,13 };
	int B[6] = { 0,5,10,11,11,11 };
	int C[6] = { 0,4,6,11,12,12 };

	int AB[6][6];//A��B���䵽n������ʱ��ӯ�����
	int AB_Max[6];//A��B���䵽n������ʱ�����ӯ�����
	int abc[6];//����C�������ӯ�����
	int max;
	int flag;
	int i, j, k;

	//A��B�����䵽i������ʱ�����ӯ��
	for (i = 0; i <= 5; i++)//iΪ�����A B���ܻ�������jΪ�����B�����Ļ�����
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

	//����c�����󣬽�5̨���������A B Cʱ���ӯ��
	max = 0;
	for (j = 0; j <= 5; j++)//jΪ�����C�����Ļ�����,5-jΪ�����A B���ܻ�����
	{
		abc[j] = AB_Max[5 - j] + C[j];
		if (abc[j] > max)
		{
			max = abc[j];
			flag = j;
		}
	}

	printf("���ӯ��Ϊ��%d\n", max);
	printf("C��������Ļ�������Ϊ��%d\n", flag);
	max = max - C[flag];
	int AB_Num = 5 - flag;

	for (i = 0; i <= AB_Num; i++)//iΪ�����B�����Ļ�����
	{
		if (AB[AB_Num][i] == max)
		{
			printf("B��������Ļ�������Ϊ��%d\n", i);
			printf("A��������Ļ�������Ϊ��%d\n", AB_Num - i);
			break;
		}
	}
	system("pause");
	return 0;
}
