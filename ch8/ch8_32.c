#include <stdio.h>
#include <stdlib.h>

#define CUBIC(X) X*X*X

int main(void)
{
	double x;
	printf("Please input a number x:");
	scanf("%le",&x);
	printf("%.2f^3=%.2f\n",x,CUBIC(x));

	return 0;
}
