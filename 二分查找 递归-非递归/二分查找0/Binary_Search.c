#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//非递归实现
int Binary_Search(int arr[], int key,int left,int right)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
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

//递归实现
//int Binary_Search(int arr[], int key, int left, int right) {
//	//求中间元素的下标
//	int mid = (left + right) / 2;
//	//数组内不含有指定元素，依据下标的规则，退出
//	if (left > right)
//		return -1;
//	//查找到指定元素
//	if (key == arr[mid]) {
//		return mid;
//		//当查找的元素大于中间下标的元素，则改变开始下标的位置
//	}
//	else if (key > arr[mid]) {
//		return Binary_Search(arr, key, mid + 1, right);
//	}
//	else {
//		//当查找的元素小于中间下标的元素，则改变结束下标的位置
//		return Binary_Search(arr, key, left, mid - 1);
//	}
//}


int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int left = 0;
	int find = 0;
	int i = 0;
	int Search = 0;
	int right = (sizeof(arr) / sizeof(arr[0]) - 1);
	printf("请输入要查找的数：");
	scanf("%d", &find);

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

