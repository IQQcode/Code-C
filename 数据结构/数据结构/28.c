#include<stdio.h>
#include<stdlib.h>

struct Lnode
{
	int number;
	int password;
	struct Lnode*next;
}Lnode,*p,*q,*head;



int main(void)

{
	int n;/*n个人*/
    int i;
    int m;/*初始报数上限值*/
    int j;
    printf("please enter the number of people n:");
/*输入测试人的数量*/ 
    scanf("%d",&n);
    loop:if(n<=0||n>100)
/*检验n是否满足要求,如不满足重新输入n值*/ 
{
    printf("\n n is erorr!\n\n");
    printf("please enter the number of people again n:");
    scanf("%d",&n);
    
goto loop;
}

for(i=1;i<=n;i++)/*建立单链表*/
{
if(i==1)
{
    head=p=(struct Lnode*)malloc(sizeof(struct Lnode));
}
    else{q=(struct Lnode*)malloc(sizeof(struct Lnode));
     p->next=q;
     p=q;
	 }
     printf("please enter the %d people's password:",i);
/*输入每个人所持有的密码值*/

    scanf("%d",&(p->password));
    p->number=i;
}

     p->next=head;/*形成循环链表*/
     p=head;
     printf("please enter the number m:");
     scanf("%d",&m);
     printf("The password is:\n");

    for(j=1;j<=n;j++)/*输出各人的编号*/

{
   for(i=1;i<m;i++,p=p->next);
  m=p->password;

  printf("%d",p->number);

  p->number=p->next->number;/*删除报m的节点*/

  p->password=p->next->password;

  q=p->next;

  p->next=p->next->next;

free(q);
}
printf("\n\n");

system("pause");/*等待按任意键退出*/
}
