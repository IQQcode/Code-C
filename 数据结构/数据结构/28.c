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
	int n;/*n����*/
    int i;
    int m;/*��ʼ��������ֵ*/
    int j;
    printf("please enter the number of people n:");
/*��������˵�����*/ 
    scanf("%d",&n);
    loop:if(n<=0||n>100)
/*����n�Ƿ�����Ҫ��,�粻������������nֵ*/ 
{
    printf("\n n is erorr!\n\n");
    printf("please enter the number of people again n:");
    scanf("%d",&n);
    
goto loop;
}

for(i=1;i<=n;i++)/*����������*/
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
/*����ÿ���������е�����ֵ*/

    scanf("%d",&(p->password));
    p->number=i;
}

     p->next=head;/*�γ�ѭ������*/
     p=head;
     printf("please enter the number m:");
     scanf("%d",&m);
     printf("The password is:\n");

    for(j=1;j<=n;j++)/*������˵ı��*/

{
   for(i=1;i<m;i++,p=p->next);
  m=p->password;

  printf("%d",p->number);

  p->number=p->next->number;/*ɾ����m�Ľڵ�*/

  p->password=p->next->password;

  q=p->next;

  p->next=p->next->next;

free(q);
}
printf("\n\n");

system("pause");/*�ȴ���������˳�*/
}
