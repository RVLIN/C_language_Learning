#include <stdio.h>
#include <stdlib.h>

void address(float *);

int main(void)
{
	float pi=3.14f;
	float *ptr=&pi;

	address(&pi);
	address(ptr);

	return 0;
}
void address (float *p1)
{
	printf("In address %p, various is %2.2f\n",p1,*p1);
}
