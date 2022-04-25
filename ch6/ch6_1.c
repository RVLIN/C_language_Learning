#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char Input_value;
	printf("Please input a char:\n");
	scanf("%c",&Input_value);
	if('0'<=Input_value && Input_value<='9')
	{
		printf("Input char is number\n");
	}
	else if(('a'<=Input_value && Input_value<='z') || ('A'<=Input_value && Input_value<='Z'))
	{
		printf("Input char is letter\n");
	}
	else
	{
		printf("Input char is neither number nor letter\n");
	}

	return 0;
}
