#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	int count,sum=0;
	printf("Please number:");
	scanf("%d",&number);
	printf("%d factor is :", number);
	for(count=1;count<=number;count++)
	{
		if(number%count==0) printf("%d ",count);
	}
	printf("\n");

	return 0;
}
