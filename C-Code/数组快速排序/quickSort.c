#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>

//定义全局变量，这两个变量需要在子函数中使用
int arr[100] = { 0 };
int n = 0;

void quicksort(int left, int right) 
{
	int  tmp = 0;
	if (left > right)
		return 0;
	int temp = arr[left]; //temp中存的就是基准数
	int i = left;
	int j = right;
	while (i != j) 
	{ 
		//顺序很重要，j要先从右边开始找
		while (arr[j] >= temp && i < j)
			j--;
		//i再从左边开始找
		while (arr[i] <= temp && i < j)
			i++;

		if (i < j)//交换两个数在数组中的位置
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	//最终将基准数归位
	arr[left] = arr[i];
	arr[i] = temp;
	quicksort(left, i - 1);//继续处理左边的，这里是一个递归的过程
	quicksort(i + 1, right);//继续处理右边的 ，这里是一个递归的过程
}


int main()
{
	printf("请输入数组元素个数： ");
	scanf("%d", &n);
	printf("请输入数组元素: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	quicksort(0, n - 1); //快速排序调用

	printf("排序结果为 ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
