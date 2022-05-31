#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double number;
	double count,sum=1;
	printf("Please number:");
	scanf("%le",&number);
	printf("1+1/2+1/3+....+1/%.2f=", number);
	for(count=2;count<=number;count++)
	{
		sum+=(1/count);
	}
	printf("%f\n",sum);

	return 0;
}
