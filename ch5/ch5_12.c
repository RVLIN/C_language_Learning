#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double W;
	printf("Input W degree:");
	scanf("%le",&W);
	W=(W-32)/1.8;
	printf("W=%.2f\n",W);

	return 0;

}
