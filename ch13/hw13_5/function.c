#include <stdio.h>
#include <math.h>

#define PI 3.1416

void show(double);

double area(double r)
{
	show(r);
	return (PI*pow(r,2.0));
}

double peri(double r)
{
	show(r);
	return (2*PI*r);
}

void show(double r)
{
	printf("r is %5.2f, ",r);
}
