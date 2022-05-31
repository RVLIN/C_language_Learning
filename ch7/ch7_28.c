#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i=1,j=1;

	do
	{
		do
		{
			printf("%dx%d=%2d  ",j,i,j*i);
			j++;
		}while(j<=9);
		printf("\n");
		i++;
		j=1;
	}while(i<=9);
	return 0;
}
