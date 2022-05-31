#include <stdio.h>
#include <stdlib.h>
#include "area.h"

int main(void)
{
	double r,base,length,height;
	printf("Please input circle r:");
	scanf("%le",&r);
	printf("CIRCLE AREA=%.2f.\n",CIRCLE(r));
	printf("Please input rectangle length,height :");
	scanf("%le,%le",&length,&height);
	printf("RECTANGLE AREA=%.2f.\n",RECTANGLE(length,height));
	printf("Please input TRIANGLE base,height:");
	scanf("%le,%le",&base,&height);
	printf("TRIANGLE AREA=%.2f.\n",TRIANGLE(base,height));
	return 0;
}
