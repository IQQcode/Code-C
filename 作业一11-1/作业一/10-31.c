//3.�ж�1000��---2000��֮������� 
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
//loop:if(year<=1000 || year >=2000)                //�ж����������Ƿ����������
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
//	leap=judge_year(year);      //һ�������Ӻ�����
//	
//	
//	/*if(year%4==0)            //����if�ж�
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
//	/*if((year%4==0 && year%100!=0 )|| (year%400==0))     //��
//		leap=1;
//	else
//		leap=0;*/   
//
//
//
//
//	/*if(year%4!=0)                     //��
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


//2.����˷��ھ���

#include<stdio.h>
int main(void)
{
	int i=0;
	int j=0;
	int s=0;
	printf("����˷��ھ���\n\n");

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


//3.��ӡ100~200֮�������

//#include<stdio.h>
//int main(void)
//{
//
//
// int i = 0, n = 0; 
// 
//                                 //�����������α�����һ����������ѭ��������һ����������ȡģ����
// for (i = 100; i <= 200; i++)     //����һ����100-200��forѭ��
// {                               //����  for(i=101;i<=200;i+2 )
//
//    for (n = 2; n <= i / 2; n++)  //��i��2����i-1֮������������㣻
//		                         //���� for("n=2 ;n<=sqrt(i) ; n++")
//		                         //145�и�Ϊ if(n >sqrt(i))
//								 //��ʼ����ȡģ����'n<=i/2'���Լ���һ��������
//    {
//        if ( i%n == 0)             
//            break;               //����������ѭ��
//    }
//    if (n > i / 2)               //����������Ϊ0�����ҡ�n>i/2���������
//    {
//        printf("%5d", i);
//    }
//}
//
//	return 0;
//}