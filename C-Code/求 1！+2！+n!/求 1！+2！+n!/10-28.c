#include<stdio.h>
int main(void)
{
	int sum=0;
	int t=1;
	int i;
	int n=0;
	
	printf("Please enter number:");

	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
      t=t*i;
      sum=sum+t;
	}

	printf("%d\n",sum);

	return 0;
}