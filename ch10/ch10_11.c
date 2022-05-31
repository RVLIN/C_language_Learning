#include <stdio.h>
#include <stdlib.h>

void add10(int *,int *);

int main(void)
{

	int a=5,b=10;
	
	printf("after add10,a=%2d b=%2d\n",a,b);
	add10(&a,&b);
	printf("after add10,a=%2d b=%2d\n",a,b);
	return 0;
}
void add10(int *p1,int *p2)
{
	*p1+=10;
	*p2+=10;
}
