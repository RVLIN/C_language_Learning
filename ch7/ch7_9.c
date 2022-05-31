#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int number=50;
	int count;
	double sum=0;
	printf("1^2-2^2+3^2-4^2+....-50^2=");
	for(count=1;count<=number;count++)
	{
		if((count%2) !=0)
		{
			sum+=pow(count,2);
		}
		else
		{
			sum-=pow(count,2);
		}
	}
	printf("%f\n",sum);

	return 0;
}
