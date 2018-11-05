#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<stdlib.h>




//三个数从大到小排序
/*int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int tmp = 0;
	scanf("%d %d %d", &i, &j, &k);
	printf("Enter the number:%d %d %d\n", i, j, k);
	
	if (i > j)
	{
		tmp = i;
		i = j;
		j = tmp;
	}
	if (i > k)
	{
		tmp = i;
		i = k;
		k = tmp;
	}
	if (j> k)
	{
		tmp = j;
		j = k;
		k = tmp;
	}
	printf("%d > %d > %d", k, j, i);
	system("pause");
	return 0;
}*/


//求十个数中最大的数：
/*int main()
{
	int i = 0;
	int max = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	max = arr[0];
	for (i = 0; i <= sizeof(arr) / sizeof(arr[0]); i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	printf("max=%d\n", max);

	system("pause");
	return 0;
}*/



//交换俩个数：
/*int main()
{
	int num1 = 0;
	int num2 = 0;
	int exc = 0;
	printf("Please enter the number:");
	scanf("%d %d", &num1, &num2);
	
	//exc=num1;
	//num1 = num2;
	//num2 = exc;

	//num1 = num1 + num2;
	//num2 = num1 - num2;
	//num1 = num1 - num2;

	//num1 = num1 ^ num2;
	//num2 = num1 ^ num2;
	//num1 = num1 ^ num2;

 printf("num1=%d,num2=%d", num1, num2);

    system("pause");
	return 0;

}*/