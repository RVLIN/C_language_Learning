#include <stdio.h>
#include <stdlib.h>

#define f(X) (4*X*X)+(6*X)-5

int main(void)
{
	double x;
	printf("Please input a number x:");
	scanf("%le",&x);
	printf("4*%.2f^2+6*%.2f-5=%.2f\n",x,x,f(x));

	return 0;
}
