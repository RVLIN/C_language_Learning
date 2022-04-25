#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Input_value;
	printf("Please input a int:\n");
	scanf("%d",&Input_value);

	if(Input_value>0)
	{
		printf("Input int more than 0\n");
	}

	if(Input_value<0)
	{
		printf("Input int more less 0\n");
	}

	if(Input_value==0)
	{
		printf("Input int equal 0\n");
	}

	return 0;
}
