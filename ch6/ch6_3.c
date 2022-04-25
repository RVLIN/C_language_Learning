#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Input_value;
	int odd_or_even;
	printf("Please input a int:\n");
	scanf("%d",&Input_value);
	odd_or_even=Input_value%2;
	if(odd_or_even==0)
	{
		printf("Input int is even\n");
	}
	else
	{
		printf("Input int is odd\n");
	}


	return 0;
}
