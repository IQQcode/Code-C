#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

/*

 11.����ж��Ӽ����������n�����Ƿ񻥲����
 
 */
//int main()
//{
//	int a[100] = { 0 };
//	int i, j, t, n, k;
//	printf("������Ҫ�������ĸ�����");
//	scanf("%d", &n);
//	printf("���������֣�");
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	for (i = 1; i <= n - 1; i++)
//		for (j = i + 1; j <= n; j++)
//			if (a[i] == a[j])
//			{
//				t = 0;
//				k = i;
//				break;
//			}
//	if (t == 1)
//		printf("No repeat!\n");
//	else
//		printf("Repeat!\n The repeat number is:%d\n", a[k]);
//
//	system("pause");
//	return 0;
//}


/*

12.	���θ�������������С�����������Լ��

*/

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	printf("������Ҫ�����������������ֵ��\n");
//	scanf("%d %d", &m, &n);
//	while (n % m)
//	{
//		r = n % m;
//		n = m;
//		m = r;
//	}
//	printf("��������������ǣ�%d\n", m);
//
//	system("pause");
//	return 0;
//
//}


/*

13.	��д������θ���һ������n,�ж����ܷ�3,5,7���������������Ϣ֮һ��
    ��ͬʱ��3,5,7����
    ��ͬʱ������������������Ҫ����ָ������������
    �ܱ�����һ��������,Ҫ����ָ������һ��������
    ���ܱ�������һ��������

*/

//int main()
//{
//	int a, b, c;
//	printf("������һ��������\n");
//	scanf("%d", &a);
//	if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0)
//		printf("��ͬʱ��3��5��7������\n");
//	else
//	{
//		if ((a % 3 != 0 && a % 5 == 0 && a % 7 == 0) || 
//			(a % 3 == 0 && a % 5 != 0 && a % 7 == 0) || 
//			(a % 3 == 0 && a % 5 == 0 && a % 7 != 0))
//		{
//			if (a % 3 != 0 && a % 5 == 0 && a % 7 == 0)
//			{
//				b = 5; c = 7;
//			}
//			else if (a % 3 == 0 && a % 5 != 0 && a % 7 == 0)
//			{
//				b = 3; c = 7;
//			}
//			else if (a % 3 == 0 && a % 5 == 0 && a % 7 != 0)
//			{
//				b = 3; c = 5;
//			}
//			printf("��ͬʱ��3��5��7�е�����������������������Ϊ%d��%d��\n", b, c);
//		}
//		else if ((a % 3 != 0 && a % 5 != 0 && a % 7 == 0) || 
//			     (a % 3 == 0 && a % 5 != 0 && a % 7 != 0) ||
//			(a % 3 != 0 && a % 5 == 0 && a % 7 != 0))
//
//		{
//			if (a % 3 != 0 && a % 5 != 0 && a % 7 == 0)
//				b = 7;
//			if (a % 3 == 0 && a % 5 != 0 && a % 7 != 0)
//				b = 3;
//			if (a % 3 != 0 && a % 5 == 0 && a % 7 != 0)
//				b = 5;
//			printf("��ͬʱ��3��5��7�е�һ��������������������Ϊ%d��\n", b);
//		}
//
//		else
//			printf("���ܱ�3��5��7���κ�һ����������\n");
//	}
//	system("pause");
//	return 0;
//}

/*

//17.	����N��������һ��Kֵ(����)��
//��ӡKֵ��һ�γ����ǵڼ���������������ִ�ӡ-1
//
//*/
//
//int main()
//{
//	int num[50] = {0};
//	int n, i, temp, position = 0;
//	printf("������N�ĸ�����");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	printf("������kֵ��");
//	scanf("%d", &temp);
//
//	for (i = 0; i < n; i++)
//	{
//		if (num[i] == temp) 
//		{
//			position = i + 1;
//			break;
//		}
//		else 
//		{
//			position = -1;
//		}
//	}
//	printf("\n%d", position);
//	system("pause");
//	return 0;
//}


/*

18.	����n���á�����123���321��1234���4321

*/

//int main()
//{
//	int inum, n;
//	while (1)                       //��������ѭ����Ҫ��Ϊ������һ��������⹦��
//	{
//		printf("������һ����������");
//		scanf("%d", &inum);
//		printf("\n");
//		if (0 > inum)               //����Ϊ�����ǣ�����ѭ����ʼ������������
//		{
//			continue;
//		}
//		while (0 < inum)            //���������
//		{
//			n = inum % 10;
//			printf("%d", n);
//			inum = inum / 10;
//		}
//		break;                    // ����ѭ��
//	}
//	system("pause");
//	return 0;
//}


/*

19.	�ַ�ʹ��Ƶ��ͳ��,�Ӽ�����һ����һ��Ӣ��С˵��ÿ���ַ�
ͳ������a���ֵ�Ƶ�ʣ�b���ֵ�Ƶ��,����..�ȵ�(��Сд��ͬ);

*/


//int main()
//{
//	char str[100] = { 0 };
//	char c = 0;
//	int j, k, count = 0;
//	printf("Please input a string:");
//	scanf("%s", str);
//	c = 'a';
//	for (j = k = 0; str[j] != '\0'; j++)
//	{
//		if (str[j] != c)
//		{
//			str[k++] = str[j];
//		}
//		else
//		{
//			count++;
//			str[k] = '\0';
//		}
//	}
//	printf("\n%d",count);
//	system("pause");
//	return 0;
//}


/*

20.	����min,max,factor��������,
  ���������[min,max]���ܱ�factor���������ĸ���

*/

int main() 
{
	int min, max, factor;
	scanf("%d%d%d", &min, &max, &factor);
	int i;
	for (i = min; i <= max; i++) 
	{
		if (i%factor == 0) 
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
