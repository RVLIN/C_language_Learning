#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	int count,prime_cnt,prime=0,max_prime;
	printf("Please number:");
	scanf("%d",&number);
	for(count=1;count<=number-1;count++)
	{
		for(prime_cnt=1;prime_cnt<=count;prime_cnt++)
		{
			if(count%prime_cnt==0) prime++;
		}
		if(prime==2)
		{
			max_prime=count;
			prime=0;
		}
		else
		{
			prime=0;
		}

	}
	printf("max prime number less than %d is %d\n",number,max_prime);
	printf("\n");

	return 0;
}
