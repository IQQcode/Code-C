#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//�����������������
int main()
{
	int i = 0;
	int temp = 0;
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };

	printf("�����������е�Ԫ�أ�\narr1=");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		scanf("%d", &arr1[i]);

	}
	printf("�����������е�Ԫ�أ�\narr2=");

	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		scanf("%d", &arr2[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	printf("\n");
	printf("arr1=");

	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	printf("arr2=");
	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%2d", arr2[i]);
	}

	system("pause");
	return 0;
}


//����ĳ�ʼ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	printf("�����������е�Ԫ�أ�");
//	scanf("%d", arr);
//
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		arr[i] = 0;
//	}
//	printf("��ʼ����Ϊ��");
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%2d", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}



//����Ԫ�صĴ�ӡ
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("����arr[]�е�Ԫ��Ϊ��");
//	for (i = 0; i <10; i++)
//	{
//		printf("%2d", arr[i]);
//	}
//	system("pause");
//	return 0;
//}



