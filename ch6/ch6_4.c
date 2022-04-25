#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Input_value;
	int absolute_value;
	printf("Please input a int:\n");
	scanf("%d",&Input_value);
	if(Input_value<0)
	{
		absolute_value=Input_value*(-1);
		printf("Input int absolute value is %d\n",absolute_value);
	}
	else
	{
		printf("Input int absolute value is %d\n",Input_value);
	}


	return 0;
}
