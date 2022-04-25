#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double radius;
	double volume;
	printf("Input radius:");
	scanf("%le",&radius);
	volume=((double)(4/3))*3.14*(radius*radius*radius);
	printf("Volume of Spheric = %.2f \n",volume);

	return 0;

}
