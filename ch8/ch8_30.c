#include <stdio.h>
#include <stdlib.h>

void add10(void);

int a=3,b=5;

int main(void)
{
	printf("Before call add10():");
	printf("a=%d, b=%d\n",a,b);
	add10();
	printf("After call add10():");
	printf("a=%d, b=%d\n",a,b);

	return 0;

}

void add10(void)
{
	a+=10;
	b+=10;
}
