#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int robbit_number=1,cnt=0;
		
	while(robbit_number%3!=1 || robbit_number%5!=3 || robbit_number%7!=2)
	{
		robbit_number++;

	}
	printf("less robbit number is %d\n",robbit_number);
	return 0;
}
