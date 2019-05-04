#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<stdlib.h>
#include<math.h> 

#define LEN sizeof(Poly)

typedef struct term {
	float coef;   //系数
	int expn;  //指数
	struct term *next;
}Poly, *Link;
int LocateElem(Link p, Link s, Link &q);
void CreatePolyn(Link &p, int m);//创建多项式
void PrintPolyn(Link p);//打印多项式（表示）   
int cmp(Link a, Link b);
Link AddPolyn(Link pa, Link pb);    //多项式相加 
Link SubPolyn(Link pa, Link pb);   //多项式相减 
Link Reverse(Link p);             //逆置多项式 
Link MultiplyPolyn(Link A, Link B);   //多项式相乘 
void Calculate(Link p, float x);     //多项式求值 

//**主函数部分**

int main()
{
	Link P1, P2, P3;   //多项式 
	int L1, L2;     //多项式长度 
	printf("------------------------------------------------------\n");
	printf("|============       一元多项式的运算     ===========|\n");
	printf("|============          1.相加（+）      ============|\n");
	printf("|============         2.相减（-）       ============|\n");
	printf("|============        3.相乘（*）        ============|\n");
	printf("------------------------------------------------------\n\n");
	printf("请输入第一个多项式的项数：");
	scanf("%d", &L1);
	CreatePolyn(P1, L1);
	printf("第一个多项式为：");
	printf("P1(X)=");
	PrintPolyn(P1);
	printf("请输入第二个多项式的项数：");
	scanf("%d", &L2);
	CreatePolyn(P2, L2);
	printf("第二个多项式为：");
	printf("P2(X)=");
	PrintPolyn(P2);
	printf("\n");

	printf("请输入要选择的运算(+ , - , *): ");
	char ch1;
	getchar();     //清除掉缓冲区的回车符 
	scanf("%c", &ch1);
	getchar();    //清除掉缓冲区的回车符
	switch (ch1) {
	case '+': {
		printf("两个一元多项式相加：   ");
		printf("P1(X)+P2(X)=");
		P3 = AddPolyn(P1, P2);
		PrintPolyn(P3);
	}break;
	case '*': {
		printf("两个一元多项式相乘：   ");
		printf("P1(X)*P2(X)=");
		P3 = MultiplyPolyn(P1, P2);
		PrintPolyn(P3);
	}break;
	default:printf("您输入了错误指令 %c ！", ch1);
	}

	char ch2;
	printf("\n是否代入X进行求值？(Y/N): ");
	ch2 = getchar();        //清除掉缓冲区的回车符  
	getchar();
	switch (ch2) {
	case 'Y': {
		float x;
		printf("\n请输入多项式中X的值：");
		scanf("%f", &x);
		Calculate(P3, x);
		break;
	}
	case 'N':break;
	default:printf("你输入了错误指令 %c ！", ch2);
	}
	system("pause");
	return 0;
}


