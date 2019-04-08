#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>

int a[101], n;

void quicksort(int left, int right) {
	int i = left, j = right, base = a[left], temp;//base�д�ľ��ǻ�׼��
	if (left > right) return;
	while (i < j) {
		while (a[j] >= base && i < j) j--;

		while (a[i] <= base && i < j) i++;

		if (i < j) { //�����������������е�λ��
			temp = a[i]; a[i] = a[j]; a[j] = temp;
		}
	}
	//���ս���׼����λ
	a[left] = a[j];
	a[j] = base;

	quicksort(left, i - 1);//�ݹ鴦�����
	quicksort(i + 1, right);//�ݹ鴦���ұ�
}

int main()
{
	printf("����������Ԫ�ظ����� ");
	scanf("%d", &n);
	printf("����������Ԫ��: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	quicksort(0, n - 1); //�����������

	printf("������Ϊ ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}
