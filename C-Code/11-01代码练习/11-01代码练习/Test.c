/*#include<stdio.h>
int main(void)
{
	int year;
	printf("Please erter the year:\n");
	scanf("%d",&year);

loop:if(year<=1000 || year>=2000)
	 {
       printf("Enter is wrong,please erter again:\n\n");
	   scanf("%d",&year);
	   goto loop;

	 }

	if(year%4==0)
	{
		if (year%100!=0)
		{
			if(year%400==0)
				printf("%d是闰年！\n",year);
			else
				printf("%d不是闰年！\n",year);

		}
		printf("%d是闰年！\n",year);

	}
	return 0;
}*/


#include<stdio.h>
int main()
{
	int i=0;
	int j=0;
	int s=0;

	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			s=i*j;
			printf("%2d * %2d = %2d",i,j,s);
		}
		printf("\n");
	}

	return 0;
}



