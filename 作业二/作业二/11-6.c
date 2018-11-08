#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<stdlib.h>
//求俩个数的最大公约数、最小公倍数：
//更相减损术
/*int main()
{
	int n, a, b, c;
	n = 1;
	printf("请输入两个整数 :");
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	while (n != 0)
	{
		a = a - b;
		if (a < b)
		{
			a = a ^ b;    //异或操作，交换俩个数值
			b = a ^ b;
			a = a ^ b;
		}
		if (a == b)
		{
			n = 0;
		}
	}
	printf("\n最大公约数是:%d\n", b);
	system("pause");
}*/



/*int main()
{
	int m= 0;
	int n = 0;
	int r = 0;
	int num1 = 0, num2 = 0, dou = 0;
	printf("请输入要求最大公因数的俩个数值：\n");
	scanf("%d %d", &m, &n);

	num1 = m;
	num2 = n;
	
	while( n % m )   //不判断 a,b 的大小，直接比较；小的对大的取余（9 % 21 == 9）
	{
		r = n % m;
		n = m;
		m = r;
	}
	printf("俩数的最大公因数是：%d\n", m);     //被模的数为最大公约数；

	dou = (num1*num2) / m;           //最小公倍数==俩数的乘积 / 最大公约数；
	printf("俩个数的最小公倍数是：%d\n", dou);

	system("pause");
    return 0;

}*/




int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	int dou = 0;
	int num1 = 0, num2 = 0;
	printf("请输入要求最大公因数的俩个数值：\n");
	scanf("%d %d", &a, &b);
	num1 = a;
	num2 = b;
	if (b > a)           //保证输出 a > b；
	{
		//num1 = a;     //为什么会出问题？？？
		//num2 = b;

		c = b;
		b = a;
		a = c;
	}
	d = a % b;
	while (d != 0)
	{
		a = b;
		b = d;
		d = a % b;

	}
	printf("俩数个的最大公因数是：%d\n", b);

	dou = (num1*num2) / b;
	printf("俩个数的最小公倍数是：%d\n", dou);

	system("pause");
	return 0;
}



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
		  {
			max = arr[i];
		  }
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

	//num1 = num1 ^ num2;        //相同为0，相异为1；
	//num2 = num1 ^ num2;
	//num1 = num1 ^ num2;

 printf("num1=%d,num2=%d", num1, num2);

	system("pause");
	return 0;

}*/