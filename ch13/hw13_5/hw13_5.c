#include <stdio.h>
#include <stdlib.h>
double area(double r);
double peri(double r);

int main(void)
{
	printf("area(2.2)=%5.2f\n",area(2.2));
	printf("peri(1.4)=%5.2f\n",peri(1.4));

	return 0;
}
