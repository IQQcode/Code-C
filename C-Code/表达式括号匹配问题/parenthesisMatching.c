#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct sta
{
	char data[MAX];
	int top;
} stack;
stack* init()//ջ��ʼ��
{
	stack* s = (stack*)malloc(sizeof(stack));
	s->top = -1;
	return s;
}
int empty(stack* s)//�ж��Ƿ��ջ
{
	if (s->top == -1)
		return 1;
	else return 0;
}
int push(stack* s, char x)//ѹջ
{
	if (s->top == MAX - 1) return -1;//��ջ�������򷵻�
	else
	{
		s->top++;
		s->data[s->top] = x;
		return 1;
	}
}
int pop(stack* s, char* x)//��ջ
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
	char x; int flag = 1, flag1 = 1;//���Ƿ��ܺ��ʵ���ջ�ͳ�ջ
	stack* s = init();
	while ((x = getchar()) != EOF)//�����'('��ѹջ��')'���ջ
	{
		if (x == '(')
			flag = push(s, x);
		if (x == ')')
			flag1 = pop(s, &x);
	}
	if (empty(s) && flag == 1 && flag1 == 1) return 1;//�������ջ����������ƥ����ȷ
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
