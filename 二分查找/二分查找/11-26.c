#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int Binary_Search(int arr[], int tab,int left,int right)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > tab)
		{
			right = mid - 1;
		}
		else if (arr[mid] < tab)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 0 };
	int left = 0;
	int find = 0;
	int i = 0;
	int Search = 0;
	int right = (sizeof(arr) / sizeof(arr[0]) - 1);
	printf("请输入要查找的数：");
	scanf("%d", &find);
	printf("请输入数组元素：\narr=");
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		scanf("%d", &arr[i]);
	}
	Search = Binary_Search(arr, find, left, right);

	if (-1 == Search)
	{
		printf("找不到^-^!\n");
	}
	else
	{
		printf("找到了，下标为%d\n", Search);
	}
	system("pause");
	return 0;
}