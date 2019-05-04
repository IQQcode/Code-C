#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct sta
{
	char data[MAX];
	int top;
} stack;
stack* init()//栈初始化
{
	stack* s = (stack*)malloc(sizeof(stack));
	s->top = -1;
	return s;
}
int empty(stack* s)//判断是否空栈
{
	if (s->top == -1)
		return 1;
	else return 0;
}
int push(stack* s, char x)//压栈
{
	if (s->top == MAX - 1) return -1;//若栈已满，则返回
	else
	{
		s->top++;
		s->data[s->top] = x;
		return 1;
	}
}
int pop(stack* s, char* x)//出栈
{
	if (empty(s)) return 0;
	else
	{
		*x = s->data[s->top];
		s->top--;
		return 1;
	}
}
int result()
{
	char x; int flag = 1, flag1 = 1;//看是否能合适的入栈和出栈
	stack* s = init();
	while ((x = getchar()) != EOF)//如果是'('则压栈，')'则出栈
	{
		if (x == '(')
			flag = push(s, x);
		if (x == ')')
			flag1 = pop(s, &x);
	}
	if (empty(s) && flag == 1 && flag1 == 1) return 1;//遍历完后栈中无括号则匹配正确
	else return -1;
}
int main()
{
	int flag;
	flag = result();
	if (flag == 1)
		printf("1");
	else printf("0");
	return 0;
}
