#include <stdio.h>
#include <stdlib.h>

double pi=3.14;

void peri(double);
void area(double);

int main(void)
{
	double r=1.0;
	printf("pi=%2.2f\n",pi);
	printf("radius=%2.2f\n",r);
	peri(r);
	area(r);

	return 0;
}
	
