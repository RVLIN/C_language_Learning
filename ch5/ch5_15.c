#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int bottom_length;
	int high;
	double square;
	printf("Input bottom_length:");
	scanf("%d",&bottom_length);
	printf("Input High:");
	scanf("%d",&high);
	square=bottom_length*high;
	printf("Area of Parallelogram = %.2f \n",square);

	return 0;

}
