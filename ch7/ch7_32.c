#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	int count,prime=0;
	printf("Please number:");
	scanf("%d",&number);
	for(count=1;count<=number;count++)
	{
		if(number%count==0) prime++;
	}
	if(prime>2)printf("%d is not prime",number);
	else printf("%d is prime",number);
	printf("\n");

	return 0;
}
