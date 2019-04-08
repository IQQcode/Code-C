#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//�ǵݹ�ʵ��
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

//�ݹ�ʵ��
//int Binary_Search(int arr[], int key, int left, int right) {
//	//���м�Ԫ�ص��±�
//	int mid = (left + right) / 2;
//	//�����ڲ�����ָ��Ԫ�أ������±�Ĺ����˳�
//	if (left > right)
//		return -1;
//	//���ҵ�ָ��Ԫ��
//	if (key == arr[mid]) {
//		return mid;
//		//�����ҵ�Ԫ�ش����м��±��Ԫ�أ���ı俪ʼ�±��λ��
//	}
//	else if (key > arr[mid]) {
//		return Binary_Search(arr, key, mid + 1, right);
//	}
//	else {
//		//�����ҵ�Ԫ��С���м��±��Ԫ�أ���ı�����±��λ��
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

