#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>

int a[101], n;

void quicksort(int left, int right) {
	int i = left, j = right, base = a[left], temp;//base中存的就是基准数
	if (left > right) return;
	while (i < j) {
		while (a[j] >= base && i < j) j--;

		while (a[i] <= base && i < j) i++;

		if (i < j) { //交换两个数在数组中的位置
			temp = a[i]; a[i] = a[j]; a[j] = temp;
		}
	}
	//最终将基准数归位
	a[left] = a[j];
	a[j] = base;

	quicksort(left, i - 1);//递归处理左边
	quicksort(i + 1, right);//递归处理右边
}

int main()
{
	printf("请输入数组元素个数： ");
	scanf("%d", &n);
	printf("请输入数组元素: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	quicksort(0, n - 1); //快速排序调用

	printf("排序结果为 ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}
