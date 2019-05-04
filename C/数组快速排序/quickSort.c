#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>

//����ȫ�ֱ�����������������Ҫ���Ӻ�����ʹ��
int arr[100] = { 0 };
int n = 0;

void quicksort(int left, int right) 
{
	int  tmp = 0;
	if (left > right)
		return 0;
	int temp = arr[left]; //temp�д�ľ��ǻ�׼��
	int i = left;
	int j = right;
	while (i != j) 
	{ 
		//˳�����Ҫ��jҪ�ȴ��ұ߿�ʼ��
		while (arr[j] >= temp && i < j)
			j--;
		//i�ٴ���߿�ʼ��
		while (arr[i] <= temp && i < j)
			i++;

		if (i < j)//�����������������е�λ��
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	//���ս���׼����λ
	arr[left] = arr[i];
	arr[i] = temp;
	quicksort(left, i - 1);//����������ߵģ�������һ���ݹ�Ĺ���
	quicksort(i + 1, right);//���������ұߵ� ��������һ���ݹ�Ĺ���
}


int main()
{
	printf("����������Ԫ�ظ����� ");
	scanf("%d", &n);
	printf("����������Ԫ��: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	quicksort(0, n - 1); //�����������

	printf("������Ϊ ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
