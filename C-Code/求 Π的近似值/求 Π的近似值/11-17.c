#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//用 Π/4 == 1 -1/3 +1/5 -1/7...公式求Π的近似值
int main()
{
	int sign = 1;
	double pi = 0.0, n = 1.0, term = 1.0;
	while (fabs(term) > 1e-6)
	{
		pi = pi + term;
		n = n + 2;
		sign = -sign;
		term = sign / n;
	}
	pi = pi * 4;
	printf("pi=%10.8f\n", pi);

	system("pause");
	return 0;
}