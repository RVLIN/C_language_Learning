#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Hex;
	printf("Please entry 16 number:");
	scanf("%x",&Hex);
	fflush(stdin);
	printf("16 is %x, 8 is %o, 10 is %d \n",Hex, Hex, Hex);
	return 0;
}
