#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b,c;
	printf("Please input your weight and high(example:60,171):");
	scanf("%d,%d",&a,&b);

	if(a>90 && b<180)
	{
		printf("You are over weight\n");
	}
	else
	{
		printf("You are not over weight\n");
	}



	return 0;
}
