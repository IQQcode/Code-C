#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

//递归
void move(int num, char A, char B, char C)
{
	if ((num == 1))
	{
		printf("把一个盘子从 %c 移动到%c\n", A, C);
	}
	else
	{
		move(num - 1, A, C, B);
		printf("把一个盘子从 %c 移动到%c\n", A, C);
		move(num - 1, B, A, C);
	}
}

//非递归

//typedef struct
//{
//	int flag;  //flag存放一个标识，为0时表示直接移动一个圆盘，为1时有多个圆盘需要移动
//	int num;   //存放当前圆盘数  
//	char A, B, C;  //A,B,C表示3个底座
//}Stack;
//
//void move(int n, char A, char B, char C)
//{
//	int top = 1;
//	int n1 = 0;  //圆盘个数
//	int a, b, c;
//	Stack stack[MAXSIZE];
//	//初值入栈
//	stack[top].flag = 1;
//	stack[top].num = n;
//	stack[top].A = A;
//	stack[top].B = B;
//	stack[top].C = C;
//
//	while (top > 0)  //栈不为空
//	{
//		if (stack[top].flag == 1)  //需要移动多个圆盘
//		{
//			/*hanoi(n,a,b,c)退栈,相当于在递归函数中实参传递给形参*/
//			n1 = stack[top].num;
//			a = stack[top].A;
//			b = stack[top].B;
//			c = stack[top].C;
//			/*hanoi(n-1,a,c,b)入栈,相当于在递归函数中的第一个递归调用
//			函数，将编号1->n-1的圆盘从塔座A移到C，B做辅助底座*/
//			stack[top].flag = 1;
//			stack[top].num = n1 - 1;
//			stack[top].A = c;
//			stack[top].B = b;
//			stack[top].C = a;
//			top++;
//			/*将第n个圆盘从A移到B*/
//			stack[top].flag = 0;
//			stack[top].num = n1;
//			stack[top].A = a;
//			stack[top].B = b;
//			top++;
//			/*hanoi(n-1,b,a,c)入栈，相当于在递归函数中的第一个递归函数调用
//			函数，将编号1->n-1的圆盘从塔座C移到B，A做辅助底座*/
//			stack[top].flag = 1;
//			stack[top].num = n1 - 1;
//			stack[top].A = a;
//			stack[top].B = c;
//			stack[top].C = b;
//		}
//		while (top > 0 && stack[top].flag == 0 || stack[top].num == 1)
//		{
//			/*将第n个圆盘从A移到B并退栈*/
//			if (top > 0 && stack[top].flag == 0)
//			{
//				/*\ "\+Enter"续行符*/
//				printf("Move dish %d form pile %c to %c\n", stack[top].num, \
//					stack[top].A, stack[top].B);
//				top--;
//			}
//			/*将第一个圆盘从A移动到B，并退栈*/
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
	printf("请输入盘子的数目：");
	scanf_s("%d", &n);
	printf("在3根柱子上移动%d个盘子到另一个盘子的步骤为：\n", n);
	move(n, 'A', 'B', 'C');
	system("pause");
	return 0;
}