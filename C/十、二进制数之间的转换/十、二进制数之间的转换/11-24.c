#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//ʮ������ת��������

//int main()
//{
//	int num = 0;
//	int arr[32] = { 0 };
//	int i = 0, k = 0;
//	printf("������ʮ���Ƶ�������");
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		k= num % 2;
//		arr[i] = k;
//		i++;
//		num = num / 2;
//	}
//	for (i=32-1; i >=0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


//int main()
//{
//int num = 0;
//	int arr[50] = { 0 };
//	int tmp = 0;
//	unsigned int i;
//	printf("������һ������:");
//	scanf("%d", &num);
//	for (i = 0x80000000; i; i >>= 1)  //0x80000000ʵ�ʴ����ֵ�� -0x80000000������˵����Դ��Ҳ�ǲ��룩,int���ͱ�ʾ����Сֵ
//	{
//		tmp = ((num & i) == i);
//		printf("%d",tmp);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


int main()
{
	int n = 0;
	char c;
	printf("������һ������������");
	scanf("%c", &c);     
	while (c == '0' || c == '1')  
	{
		printf("%c", c);

		n = (n << 1) + c - '0';//�ַ�'0',ASCIIΪ48
		//һ��(ÿ��ȡһ������)������һλ��cΪÿһ�ζ�ȡ�����ֵ�ASCIIֵ
		//����ASCII����0��ֵ��48,1��ֵ��49�����˴�cֻ�п�����49��48��
		//����ǰ��c����1����n�Ķ�������ʽ������һλ��ͬʱ���ұ߲���һ��1������0��ͬ������һ��0��

		scanf("%c", &c);    
	}
	printf("��ʮ��������%d\n", n);   
	system("pause");
	return 0;
}
