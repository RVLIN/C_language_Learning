#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int odd_number;
	int count,sum=0;
	printf("Please odd number:");
	scanf("%d",&odd_number);
	if (odd_number%2!=0)
	{
		for(count=1;count<=odd_number;count+=2)
		{
			sum+=count;	
		}
		printf("1+3+5+....+%d=%d\n",odd_number,sum);
	}
	else
	{
		printf("Your input number is not odd number\n");
	}

	return 0;
}
