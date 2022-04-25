#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char String[10];
	printf("Please entry more less than 10 char string:");
	scanf("%s",String);
	fflush(stdin);
	printf("\"%s\"\n",String);
	printf("\\%20s\\\n",String);
	printf("\\%-20s\\\n",String);
	return 0;
}
