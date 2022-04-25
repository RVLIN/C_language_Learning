#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=8;
	printf("a=%d\n",++a);
	printf("a=%d\n",a--);

	int b=20;
	a=10;
	a=a%5;
	b=b/6;
	printf("a=%d\n",a);
	printf("b=%d\n",b);

	a=20;
	b=5;

	a=a%b;
	b=b*3;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
