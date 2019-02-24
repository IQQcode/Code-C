#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <stdlib.h>

//数组实现

//int main()
//{
//	int n, i, outpeople = 0, sum = 0, t = 0;//outpeople为出列人数
//	                           sum为计数器，给初始数组全部元素赋值为0
//	int array[10] = { 0 };
//	printf("从第k人开始报数：");
//	scanf("%d", &n); //n为你所选择开始的人，而i是数到第几个人出列
//	printf("数到m的人出列：");
//	scanf("%d", &i);
//
//	for (n;outpeople < 10; n++)
//	{
//		if (array[n] == 0)//判断数组元素是否为0，如果是计数器+1 
//		{
//			sum += 1;
//		}
//		if (sum == i)//判断计数器是否达到i值，如果是，标记为1，出列人数+1，输出数组下标。 
//		{
//			sum = 0;
//			array[n] = 1;
//			outpeople += 1;
//			printf("%d\n", n + 1);
//		}
//		if (n == 9)
//		{
//			n = -1;
//			continue;
//		}
//	}
//	system("pause");
//	return 0;
//}

//循环链表实现

typedef struct node {
	int number;
	struct node * next;
}person;


person * initLink(int n) {
	person * head = (person*)malloc(sizeof(person));
	head->number = 1;
	head->next = NULL;
	person * cyclic = head;
	for (int i = 2; i <= n; i++) {
		person * body = (person*)malloc(sizeof(person));
		body->number = i;
		body->next = NULL;
		cyclic->next = body;
		cyclic = cyclic->next;
	}
	cyclic->next = head;//首尾相连
	return head;
}
void Find(person * head, int k, int m) 
{
	person * tail = head;//找到链表第一个结点的上一个结点，为删除操作做准备
	while (tail->next != head) 
	{
		tail = tail->next;
	}
	person * p = head;//找到编号为k的人
	while (p->number != k) 
	{
		tail = p;
		p = p->next;
	}//从编号为k的人开始，只有符合p->next==p时，说明链表中除了p结点，所有编号都出列了，
	while (p->next != p) 
	{
		//找到从p报数1开始，报m的人，并且还要知道数m-1de人的位置tail，方便做删除操作。
		for (int i = 1; i < m; i++) 
		{
			tail = p;
			p = p->next;
		}
		tail->next = p->next;//从链表上将p结点摘下来
		printf("出列人的编号为:%d\n", p->number);
		free(p);
		p = tail->next;//继续使用p指针指向出列编号的下一个编号，游戏继续
	}
	printf("出列人的编号为:%d\n", p->number);
	free(p);
}


int main() 
{
	printf("输入圆桌上的人数n:");
	int n;
	scanf("%d", &n);
	person * head = initLink(n);
	printf("从第k人开始报数(k>1且k<%d)：", n);
	int k;
	scanf("%d", &k);
	printf("数到m的人出列：");
	int m;
	scanf("%d", &m);
	Find(head, k, m);

	system("pause");
	return 0;
}