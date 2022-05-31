#include <stdio.h>

void func(void)
{
	extern int a;
	a=300;
	printf("In func(), a=%d\n",a);
}
