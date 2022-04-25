#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char String[25];
	printf("Input a string:");
	gets(String);
//	fflush(stdin);
	printf("The string is %s\n",String);
	
	return 0;
}
