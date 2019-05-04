#include<stdio.h>
int main(void)
{
	int num1=0, num2=0, tmp=0;

	printf("num1=%d,num2=%d\n\n",num1,num2);

	scanf("%d%d",&num1,&num2);

	/*tmp=num1;
	num1=num2;
	num2=tmp;*/


	//num1=num1+num2;
	//num2=num1-num2;
	//num1=num1-num2;

    num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;

    printf("num1=%d,num2=%d",num1,num2);





	return 0;
}