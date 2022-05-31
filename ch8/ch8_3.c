#include <stdio.h>
#include <stdlib.h>

int cub(int);

int main(void)
{
	int number;
	printf("Input a number:");
	scanf("%d",&number);
	printf("number^3=%d\n",cub(number));
	return 0;
}

int cub(int k)
{
	int cub_number=k;
	for(int i=1;i<=2;i++)k=k*cub_number ;
	return k;
}
