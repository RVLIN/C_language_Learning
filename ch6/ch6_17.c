#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int Input_value;
	printf("Please input your weight:\n");
	scanf("%d",&Input_value);

	Input_value>90 ? printf("You are over weight\n"):printf("You are not over weight\n");



	return 0;
}
