#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float a, b, c, rDisc, p, q, x1, x2;
	printf("Please enter three numbers: ");
	scanf("%f%f%f", &a, &b, &c);
	rDisc = b * b - 4 * a * c;
	p = (-b / (2 * a));
	q = (sqrt(rDisc) / (2 * a));
	x1 = p + q;
	x2 = p - q;
	printf("x1=%f\nx2=%f", x1, x2);
	system("pause");
}
