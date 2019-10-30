#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10] = { 1,2,3,3,3,4,3,3 };
	int i, msg = 0, maxLength = 0, position = 0;
	for (i = 0; i < 9; i++)
	{
		if ((a[i + 1] - a[i]) == 0)
		{
			msg++;
			if (msg > maxLength)
			{
				maxLength = msg;
				position = i + 1;
			}
		}
		else msg = 0;
	}
	maxLength++;
	printf("position %d\n", position);
	for (i = 0; i < maxLength; i++)
	{
		printf("%d ", a[position]);
	}
	printf("\n");
	return 0;
}