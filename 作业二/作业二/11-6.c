#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
#include<stdlib.h>
//�������������Լ������С��������
//���������
/*int main()
{
	int n, a, b, c;
	n = 1;
	printf("�������������� :");
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
			a = a ^ b;    //������������������ֵ
			b = a ^ b;
			a = a ^ b;
		}
		if (a == b)
		{
			n = 0;
		}
	}
	printf("\n���Լ����:%d\n", b);
	system("pause");
}*/



/*int main()
{
	int m= 0;
	int n = 0;
	int r = 0;
	int num1 = 0, num2 = 0, dou = 0;
	printf("������Ҫ�����������������ֵ��\n");
	scanf("%d %d", &m, &n);

	num1 = m;
	num2 = n;
	
	while( n % m )   //���ж� a,b �Ĵ�С��ֱ�ӱȽϣ�С�ĶԴ��ȡ�ࣨ9 % 21 == 9��
	{
		r = n % m;
		n = m;
		m = r;
	}
	printf("��������������ǣ�%d\n", m);     //��ģ����Ϊ���Լ����

	dou = (num1*num2) / m;           //��С������==�����ĳ˻� / ���Լ����
	printf("����������С�������ǣ�%d\n", dou);

	system("pause");
    return 0;

}*/




int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	int dou = 0;
	int num1 = 0, num2 = 0;
	printf("������Ҫ�����������������ֵ��\n");
	scanf("%d %d", &a, &b);
	num1 = a;
	num2 = b;
	if (b > a)           //��֤��� a > b��
	{
		//num1 = a;     //Ϊʲô������⣿����
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
	printf("����������������ǣ�%d\n", b);

	dou = (num1*num2) / b;
	printf("����������С�������ǣ�%d\n", dou);

	system("pause");
	return 0;
}



//�������Ӵ�С����
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


//��ʮ��������������
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



//������������
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

	//num1 = num1 ^ num2;        //��ͬΪ0������Ϊ1��
	//num2 = num1 ^ num2;
	//num1 = num1 ^ num2;

 printf("num1=%d,num2=%d", num1, num2);

	system("pause");
	return 0;

}*/