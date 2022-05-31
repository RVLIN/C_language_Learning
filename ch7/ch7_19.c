#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number=1;
	int count,sum=1;
	do 
	{
		number++;
		sum+=number;
	} while (sum<=1000);


	printf("1+2+3+....+%d=%d\n",number,sum);

	return 0;
}
