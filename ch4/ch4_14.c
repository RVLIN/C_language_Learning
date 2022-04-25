#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Orctl;
	printf("Please entry 10 number:");
	scanf("%d",&Orctl);
	fflush(stdin);
	printf("10 is %d, 8 is %o, 16 is %x \n",Orctl, Orctl, Orctl);
	return 0;
}
