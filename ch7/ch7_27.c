#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,z,limit=5;

	for(i=1;i<=limit;i++)
	{
		for(j=1;j<=limit-i;j++)printf(" ");
		for(z=1;z<=i;z++)printf("%d",z);
		printf("\n");
	}
	printf("\n");
	
	return 0;
}

