#include<stdio.h>

int main(void)

{
	int leap,year;

	printf("Please enter the year:");

	scanf("%d",&year);



	/*leap=judge_year(year);  */    //方法一：调用子函数；
	
	
	/*if(year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
				leap=1;
			else
				leap=0;
		}
		else
		leap=1;
	}
	else
	leap=0;*/      //方法二：if嵌套的判断结构；
	
	
	
	
	
	/*if((year%4==0 && year%100!=0 )|| (year%400==0))
		leap=1;
	else
		leap=0;*/   //方法三：或引用操作；




	if(year%4!=0)
		leap=0;
	
	else if(year%100!=0)
		leap=1;

	else if(year%400!=0)
		leap=0;

	else
		leap=1;                    //方法四




	/*if(year%4==0)             //错误：如果满足条件就不执行%100了。
	                            //     例如2100，可以%4，所以直接就输出闰年了
		leap=1;
	
	else if(year%100==0)
		leap=0;

	else if(year%400==0)
		leap=1;

	else
		leap=0;*/              



	
	
	
	if(leap==1)                       //leap==1,而不是leap=1;如果leap=1，则前面
		                             //      的leap全部赋值为1，输出的全为闰年
		printf("%d leap is",year);
	else
		printf("%d leap not is",year);

	printf(" a leap year.\n");

	return 0; 
}


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
//}