#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double mile;
	double km;
	printf("Input km:");
	scanf("%le",&km);
	mile=km/1.6;
	printf("%.2f km = %.2f mile\n",km,mile);

	return 0;

}
