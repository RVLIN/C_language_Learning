#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c;
	printf("Please input your 3 int(example:1,2,3):");
	scanf("%d,%d,%d",&a,&b,&c);

	if(a+b>c && a+c>b && b+c>a)
	{
		printf("3 int can be a triangle\n");
	}
	else
	{
		printf("3 int can not be a triangle\n");
	}



	return 0;
}
