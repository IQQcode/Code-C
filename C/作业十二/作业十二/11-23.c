#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*1.��д������ 
unsigned int reverse_bit(unsigned int value);
��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��

�磺
��32λ������25���ֵ�������и�λ��
00000000000000000000000000011001
��ת�󣺣�2550136832��
10011000000000000000000000000000
���������أ�
2550136832*/


void Reverse(int arr[], int len)
{
	int i = 0;
	for (i = 0; i <= len / 2; i++)
	{
		Swap(arr + i, arr + len - 1 - i);
	}
}

int Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	return 0;
}

int Binary(int arr[], int len, int n)
{
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		n = (n << 1) + i - '0';
		scanf("%d", &i);
	}
	return n;
}

void Print(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		printf("%d", arr[i]);
		}
	printf("\n");
 }

int main()
{
	int num = 0;
	int arr[32] = {0};
	int i = 0;
	unsigned int tmp = 0;
	int sum = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("��������Ҫת����������");
	scanf("%d", &num);
	printf("���ú�Ϊ��\n");
	for (i = 0; i < 32; i++)
	{
		arr[i] = num & 1;
		num >>= 1;
		printf("%d", arr[i]);
	}
	/*for (i = 0; i < 32; i++)
	{
	int tmp = (unsigned int)pow(2, i)*arr[31-i];
		sum += tmp;
	}*/
	printf("\n");
	Reverse(arr, sz);
	printf("�������Ķ�������ʽΪ��32bit����\n");
	Print(arr,sz);
	Binary(arr, sz, num);
	printf("��ת���ʮ������Ϊ��%d\n");
	system("pause");
	return 0;
}

//ʮ������ת��Ϊ32Bit�Ķ���������
//int main()
//{
//	int num = 0;
//	int arr[50] = { 0 };
//	int tmp = 0;
//	unsigned int i;
//	printf("������һ������:");
//	scanf("%d", &num);
//	for (i = 0x80000000; i; i >>= 1)  //0x80000000ʵ�ʴ����ֵ�� -0x80000000������˵����Դ��Ҳ�ǲ��룩,int���ͱ�ʾ����Сֵ
//	{
//		tmp = ((num & i) == i);
//		printf("%d",tmp);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ

//int main()
//{
//	int i = 0, j = 0;
//	int average1 = 0;
//	int average2 = 0;
//	printf("��������������");
//	scanf("%d%d", &i, &j);
//	//������λ����
//	average1 = i - (i - j) / 2;
//	average2 = (i&j) + ((i^j) >> 1);
//	printf("average1=%d\naverage2=%d\n", average1, average2);
//	system("pause");
//	return 0;
//}


/*3.���ʵ�֣� 
һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
���ҳ��������*/

//int main()
//{
//	int arr[] = {0,1,2,3,4,9,0,3,4,2,1};
//	int i = 0;
//	int len = 0;
//	printf("������Ҫ���ҵ����У�");
//	len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i< len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("�����������ǣ�%d\n",arr[0]);
//	system("pause");
//	return 0;
//}