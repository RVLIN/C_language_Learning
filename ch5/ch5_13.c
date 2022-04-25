#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double mile;
	double km;
	printf("Input mile:");
	scanf("%le",&mile);
	km=mile*1.6;
	printf("%.2f mile = %.2f km\n",mile,km);

	return 0;

}
