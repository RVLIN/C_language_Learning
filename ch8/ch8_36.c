#include <stdio.h>
#include <stdlib.h>
#include "my_math.h"

int main(void)
{
	double x,y;
	printf("Please input a number x:");
	scanf("%le",&x);
	printf("SQUARE(%.2f):%.2f, CUBIC(%.2f):%.2f, ABS(%.2f):%.2f.\n",x,SQUARE(x),x,CUBIC(x),x,ABS(x));
	printf("Please input two numbers x,y:");
	scanf("%le,%le",&x,&y);
	printf("AVERAGE(%.2f,%.2f):%.2f, PRODUCT(%.2f,%.2f):%.2f.\n",x,y,AVERAGE(x,y),x,y,PRODUCT(x,y));
}
