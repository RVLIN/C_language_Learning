#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int even_number;
	int count,sum=0;
	do 
	{
		printf("Please input even number:");
		scanf("%d",&even_number);
	} while (even_number < 0 || even_number%2 !=0);


	for(count=0;count<=even_number;count+=2)
	{
		sum+=count;	
	}
	printf("0+2+4+6+....+%d=%d\n",even_number,sum);

	return 0;
}
