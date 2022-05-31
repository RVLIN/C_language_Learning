#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int number=10;
	int count=0;
	double sum=0;
	while(count<=10)
	{
		printf("%d pow is %.0f\n",count,pow(count,2));
		sum+=pow(count,2);
		count++;
	}
	printf("sum is %.0f\n",sum);

	return 0;
}
