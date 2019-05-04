#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr1[] = { "abcdef" };
	char arr2[] = { 'a','b','c','d','e','f','\0' };
	printf("%d\n", strlen(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%s\n", arr1);
	printf("%s\n", arr2);
    system("pause");
	return 0;
}