#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

//�ݹ�
void move(int num, char A, char B, char C)
{
	if ((num == 1))
	{
		printf("��һ�����Ӵ� %c �ƶ���%c\n", A, C);
	}
	else
	{
		move(num - 1, A, C, B);
		printf("��һ�����Ӵ� %c �ƶ���%c\n", A, C);
		move(num - 1, B, A, C);
	}
}

//�ǵݹ�

//typedef struct
//{
//	int flag;  //flag���һ����ʶ��Ϊ0ʱ��ʾֱ���ƶ�һ��Բ�̣�Ϊ1ʱ�ж��Բ����Ҫ�ƶ�
//	int num;   //��ŵ�ǰԲ����  
//	char A, B, C;  //A,B,C��ʾ3������
//}Stack;
//
//void move(int n, char A, char B, char C)
//{
//	int top = 1;
//	int n1 = 0;  //Բ�̸���
//	int a, b, c;
//	Stack stack[MAXSIZE];
//	//��ֵ��ջ
//	stack[top].flag = 1;
//	stack[top].num = n;
//	stack[top].A = A;
//	stack[top].B = B;
//	stack[top].C = C;
//
//	while (top > 0)  //ջ��Ϊ��
//	{
//		if (stack[top].flag == 1)  //��Ҫ�ƶ����Բ��
//		{
//			/*hanoi(n,a,b,c)��ջ,�൱���ڵݹ麯����ʵ�δ��ݸ��β�*/
//			n1 = stack[top].num;
//			a = stack[top].A;
//			b = stack[top].B;
//			c = stack[top].C;
//			/*hanoi(n-1,a,c,b)��ջ,�൱���ڵݹ麯���еĵ�һ���ݹ����
//			�����������1->n-1��Բ�̴�����A�Ƶ�C��B����������*/
//			stack[top].flag = 1;
//			stack[top].num = n1 - 1;
//			stack[top].A = c;
//			stack[top].B = b;
//			stack[top].C = a;
//			top++;
//			/*����n��Բ�̴�A�Ƶ�B*/
//			stack[top].flag = 0;
//			stack[top].num = n1;
//			stack[top].A = a;
//			stack[top].B = b;
//			top++;
//			/*hanoi(n-1,b,a,c)��ջ���൱���ڵݹ麯���еĵ�һ���ݹ麯������
//			�����������1->n-1��Բ�̴�����C�Ƶ�B��A����������*/
//			stack[top].flag = 1;
//			stack[top].num = n1 - 1;
//			stack[top].A = a;
//			stack[top].B = c;
//			stack[top].C = b;
//		}
//		while (top > 0 && stack[top].flag == 0 || stack[top].num == 1)
//		{
//			/*����n��Բ�̴�A�Ƶ�B����ջ*/
//			if (top > 0 && stack[top].flag == 0)
//			{
//				/*\ "\+Enter"���з�*/
//				printf("Move dish %d form pile %c to %c\n", stack[top].num, \
//					stack[top].A, stack[top].B);
//				top--;
//			}
//			/*����һ��Բ�̴�A�ƶ���B������ջ*/
//			if (top > 0 && stack[top].num == 1)
//			{
//				printf("Move dish %d form pile %c to %c\n", stack[top].num, \
//					stack[top].A, stack[top].B);
//				top--;
//			}
//		}
//	}
//}


int main()
{
	int n = 0;
	printf("���������ӵ���Ŀ��");
	scanf_s("%d", &n);
	printf("��3���������ƶ�%d�����ӵ���һ�����ӵĲ���Ϊ��\n", n);
	move(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}