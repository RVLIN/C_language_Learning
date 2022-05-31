#include <stdio.h>
#include <stdlib.h>

double cub(double);
double f(double);
int main(void)
{
	double number;
	printf("Input a number:");
	scanf("%lf",&number);
	printf("3*number^3+2*number-1=%.3f\n",f(number));
	return 0;
}

double f(double x)
{
	int f_x;
	f_x=3*x*x*x+2*x-1;
	return f_x;
}

double cub(double k)
{
	double cub_number=k;
	for(int i=1;i<=2;i++)k=k*cub_number ;
	return k;
}
