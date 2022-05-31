#include <stdio.h>
#include <stdlib.h>

double square(double);

int main(void)
{
	double number;
	printf("Input a number:");
	scanf("%le",&number);
	printf("number^2=%.1f\n",square(number));
	return 0;
}

double square(double k)
{
	return k*k;
}
