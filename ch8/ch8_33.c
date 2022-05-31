#include <stdio.h>
#include <stdlib.h>

#define AVERAGE(X,Y) (X+Y)/2

int main(void)
{
	double x,y;
	printf("Please input two number x,y:");
	scanf("%le,%le",&x,&y);
	printf("X:%.2f, Y:%.2f, AVERAGE:%.2f\n",x,y,AVERAGE(x,y));

	return 0;
}
