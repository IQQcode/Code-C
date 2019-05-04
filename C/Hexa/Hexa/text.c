//#include <stdio.h>
//
//
//char *Hex="0123456789ABCDEF";
//
//
//void PrintHex(int a)
//{
// if(!a)return;
// PrintHex(a/16);
// printf("%c",Hex[a%16]);
//}
//
//
//int main()
//{
// int a;
// scanf("%d",&a);
// PrintHex(a);
// return 0;
//}

//#include<stdio.h>
//int main(){
//char map[]="0123456789ABCDEF",tp[100];
//int i=0,num,t;
//scanf("%d",&num);
//while(num!=0)
//{
//tp[i++]=map[num%16];
//num/=16;
//}
//tp[i]='\0';
//strrev(tp);  //字符串逆转函数
//printf("%s",tp);
//return 0;
//}



#include <stdio.h>
 
void fun(int m)
{
	int temp = 0;
	if (m == 0)
		return;
	
	temp = m % 8;
	fun(m /= 8);
	
	printf("%d", temp);
}
 
int main()
{
	int a;
	printf("请输入十进制数:");
	
	
	scanf("%d", &a);
	
	fun(a);
	printf("\n");
	
	return 0;
}
