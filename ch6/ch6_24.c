#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int odd_sum=0;
	int i=0;

	odd:
		i++;
	if(i<=100)
	{
		if((((i*i)%2))==1 || (((i*i)%4))==1 || ((((i*i))%8))==1) odd_sum+=i;
		goto odd;
	}
	printf("odd sum is:%d\n",odd_sum);
	return 0;
}
