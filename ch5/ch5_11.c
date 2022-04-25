#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double C;
	printf("Input C degree:");
	scanf("%le",&C);
	C=1.8*C+32;
	printf("W=%.2f\n",C);

	return 0;

}
