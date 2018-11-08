#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//交换俩个数组的内容：
int main()
{
	int i = 0, j = 0;
	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[] = {0};

	for (i = 0; i <= sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		for (j = 0; j <= sizeof(arr2) / sizeof(arr2[0]); j++)
		{
			arr1[i] = arr2[j];
			printf("%s", arr1);
		}
	}
	system("pause");
	return 0;
}

















//统计1到100中9出现的个数：
//代码分析：9，90，99可以整除9；29-89的个位为9
/*int main()
{
	int i = 0;
	int count = 0;
		for(i = 1; i <= 100; i++)
		{
			if (i % 10 == 9)
			{
				count++;
				printf("%3d", i);
			}
			
			if (i / 10 == 9)
			{
				count++;
				printf("%3d", i);
			}

		}
		printf("\n");
	printf("count=%d", count-1);

	system("pause");
	return 0;
}*/