#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//1.��������Ϸ��

//void menu()
//{
//	printf("****************************\n");
//	printf("*******   1.Play.   ********\n");
//	printf("*******   0.Exit.   ********\n");
//	printf("****************************\n");
//	printf("\n\n");
//
//}
//
//void game()
//{
//	int num = 0;
//	int guess = 0;
//	//printf("��������Ϸ���ܺ����Ӵ��\n");
//	//1.����һ���������
//	//������������������
//	num = rand()%100+1;
//	//printf("%d\n", num);
//
//	while (1)
//	{
//		printf("\n");
//		printf("������>>-:");
//		scanf("%d",&guess);
//		if (guess > num)
//			printf("�´���^-^\n\n");
//		else if (guess < num)
//			printf("��С��*-*\n\n");
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ��Ǻǡ���\n");
//			printf("����ȥ���Ʊ��#/\#����\n\n\n");
//			break;
//			//menu();
//		}
//	}
//
//	//2.�����֣�
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));  //������ֻ�����һ�μ��ɣ�
//
//	do {
//		menu();
//		printf("��ѡ��>->:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//				break;
//		case 0:
//			printf("�˳���Ϸ������\n");
//					break;
//				default:
//					printf("ѡ��������������롭��\n");
//						break;
//		}
//	} while (input);
//
//	system("pause");
//	return 0;
//}



//2.���ֲ��ң�

binary_search(int arr[], int tab, int left, int right)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > tab)
		{
			right=mid - 1;
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
	int arr[20] = { 0 };
	int i = 0;
	int find = 7;
	int ret = 0;
	int left = 0;
	//int sz =( sizeof(arr) / sizeof(arr[0]));
	int right = (sizeof(arr) / sizeof(arr[0]) - 1);

	printf("arr=");
	for (i = 0; i < 10; i++)
	{
		scanf("%d",&arr[i]);
	}

	ret = binary_search(arr, find, left, right);
	if (-1 == ret)
	{
		printf("�Ҳ���^-^!\n");
	}
	else
	{
		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
	}

	system("pause");
	return 0;

}


//4.��Сдת����
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//
//	if (ch >= 'A'&&ch <= 'Z')
//	{
//		ch = (ch + 32);
//		printf("%c", ch);
//	}
//
//	else if(ch >= 'a'&&ch <= 'z')
//	{
//		ch = (ch - 32);
//		printf("%c", ch);
//
//	}
//
//	system("pause"); 
//	return 0;
//}


//3.��д����ģ��������������ĳ���
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������>>-:");
//		scanf("%s", password);
//
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ����½�ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("����������������룡^-^\n\n");
//		}
//	}
//	if (3 == i) 
//	{
//		printf("����������󣬵�¼ʧ�ܣ�\n");
//	}
//
//	system("pause");
//	return 0;
//}