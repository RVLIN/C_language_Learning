#include <stdio.h>
#include <stdlib.h>

#define ABS(X) X>0 ? X:-X

int main(void)
{
	double x;
	printf("Please input a number x:");
	scanf("%le",&x);
	printf("X:%.2f, ABS:%.2f\n",x,ABS(x));

	return 0;
}
