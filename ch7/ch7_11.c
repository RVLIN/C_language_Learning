#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	int count,sum=0;
	printf("1~1000 perfect number:\n");
	for (number=1;number<=1000;number++) //1~1000 for loop
	{
		for(count=1;count<=number;count++) // find factor number
		{
			if(number%count==0 && count!=number)
			{
				sum+=count;
			}
			if(sum==number && count==number)
			{
				printf("%d is a perfect number\n ",count);
			}
		}
		sum=0;
	}
	printf("\n");

	return 0;
}
