//3.判断1000年---2000年之间的闰年 
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//
//{
//	int leap,year;
//
//	printf("Please enter the year:");
//
//	scanf("%d",&year);
//
//loop:if(year<=1000 || year >=2000)                //判断输入的年份是否符合条件；
//	 {
//		 printf("\nyear is erorr\n\n");
//
//		 printf("Please erter again:");
//
//		 scanf("%d",&year);
//
//		 goto loop;
//	 }
//
//
//
//	leap=judge_year(year);      //一、调用子函数；
//	
//	
//	/*if(year%4==0)            //二、if判断
//	{
//		if(year%100==0)
//		{
//			if(year%400==0)
//				leap=1;
//			else
//				leap=0;
//		}
//		else
//		leap=1;
//	}
//	else
//	leap=0;*/
//	
//	
//	
//	
//	
//	/*if((year%4==0 && year%100!=0 )|| (year%400==0))     //三
//		leap=1;
//	else
//		leap=0;*/   
//
//
//
//
//	/*if(year%4!=0)                     //四
//		leap=0;
//	
//	else if(year%100!=0)
//		leap=1;
//
//	else if(year%400!=0)
//		leap=0;
//
//	else
//		leap=1;*/                            
//
//
//
//	
//	
//	
//	if(leap==1)                       
//		                             
//		printf("%d leap is",year);
//	else
//		printf("%d leap not is",year);
//
//	printf(" a leap year.\n");
//
//	return 0; 
//}
//
//
//int judge_year(int day)
//{
//	int i;
//
//	if((day%4==0 && day%100!=0) || (day%400==0))
//
//		i=1;
//	else 
//		i=0;
//
//	return (i);
//}*/


//2.输出乘法口诀表

#include<stdio.h>
int main(void)
{
	int i=0;
	int j=0;
	int s=0;
	printf("输出乘法口诀表：\n\n");

	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			s = i * j;
			printf("%2d*%2d=%2d",i,j,s);
		}
		printf("\n");
	}

	return 0;
}


//3.打印100~200之间的素数

//#include<stdio.h>
//int main(void)
//{
//
//
// int i = 0, n = 0; 
// 
//                                 //定义两个整形变量，一个用来控制循环次数，一个用来进行取模运算
// for (i = 100; i <= 200; i++)     //建立一个从100-200的for循环
// {                               //或者  for(i=101;i<=200;i+2 )
//
//    for (n = 2; n <= i / 2; n++)  //让i与2——i-1之间的数求余运算；
//		                         //或者 for("n=2 ;n<=sqrt(i) ; n++")
//		                         //145行改为 if(n >sqrt(i))
//								 //开始进行取模运算'n<=i/2'可以减少一半运算量
//    {
//        if ( i%n == 0)             
//            break;               //非素数跳出循环
//    }
//    if (n > i / 2)               //符合余数不为0条件且‘n>i/2’即可输出
//    {
//        printf("%5d", i);
//    }
//}
//
//	return 0;
//}