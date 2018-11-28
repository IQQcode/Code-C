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
	printf("������Ҫ���ҵ�����");
	scanf("%d", &find);

	Search = Binary_Search(arr, find, left, right);

	if (-1 == Search)
	{
		printf("�Ҳ���^-^!\n");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ%d\n", Search);
	}
	system("pause");
	return 0;
}

//public static int binarySearch(Integer[] srcArray, int des) {
//	//�����ʼ��С���������
//	int low = 0;
//	int high = srcArray.length - 1;
//	//ȷ����������ظ����ң�Խ��
//	while (low <= high) {
//		//������м�����ֵ
//		int middle = (high + low) >> > 1;//��ֹ���
//		if (des == srcArray[middle]) {
//			return middle;
//			//�ж�����
//		}
//		else if (des < srcArray[middle]) {
//			high = middle - 1;
//			//�ж�����
//		}
//		else {
//			low = middle + 1;
//		}
//	}
//	//��û�У��򷵻�-1
//	return -1;
//}