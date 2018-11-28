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
	int arr[] = {1,2,3,4,5,6,7,8,9};
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

//public static int binarySearch(Integer[] srcArray, int des) {
//	//定义初始最小、最大索引
//	int low = 0;
//	int high = srcArray.length - 1;
//	//确保不会出现重复查找，越界
//	while (low <= high) {
//		//计算出中间索引值
//		int middle = (high + low) >> > 1;//防止溢出
//		if (des == srcArray[middle]) {
//			return middle;
//			//判断下限
//		}
//		else if (des < srcArray[middle]) {
//			high = middle - 1;
//			//判断上限
//		}
//		else {
//			low = middle + 1;
//		}
//	}
//	//若没有，则返回-1
//	return -1;
//}