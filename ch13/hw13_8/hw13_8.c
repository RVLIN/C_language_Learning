#include <stdio.h>
#include <stdlib.h>

void func(void);
int a;

int main(void)
{
	a=100;

	printf("Before call func(), a=%d\n",a);
	func();
	printf("After call func(), a=%d\n",a);

	return 0;
}
