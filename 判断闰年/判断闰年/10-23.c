#include<stdio.h>

int main(void)

{
	int leap,year;

	printf("Please enter the year:");

	scanf("%d",&year);



	/*leap=judge_year(year);  */    //����һ�������Ӻ�����
	
	
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
	leap=0;*/      //��������ifǶ�׵��жϽṹ��
	
	
	
	
	
	/*if((year%4==0 && year%100!=0 )|| (year%400==0))
		leap=1;
	else
		leap=0;*/   //�������������ò�����




	if(year%4!=0)
		leap=0;
	
	else if(year%100!=0)
		leap=1;

	else if(year%400!=0)
		leap=0;

	else
		leap=1;                    //������




	/*if(year%4==0)             //����������������Ͳ�ִ��%100�ˡ�
	                            //     ����2100������%4������ֱ�Ӿ����������
		leap=1;
	
	else if(year%100==0)
		leap=0;

	else if(year%400==0)
		leap=1;

	else
		leap=0;*/              



	
	
	
	if(leap==1)                       //leap==1,������leap=1;���leap=1����ǰ��
		                             //      ��leapȫ����ֵΪ1�������ȫΪ����
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