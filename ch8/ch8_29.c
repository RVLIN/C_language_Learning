#include <stdio.h>
#include <stdlib.h>

void add10(int,int);

int a=3,b=5;

int main(void)
{
	int a=3,b=5;
	printf("Before call add10():");
	printf("a=%d, b=%d\n",a,b);
	add10(a,b);
	printf("After call add10():");
	printf("a=%d, b=%d\n",a,b);

	return 0;

}

void add10(int a ,int b)
{
	a+=10;
	b+=10;
}
