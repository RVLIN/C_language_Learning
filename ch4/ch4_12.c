#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char FirstName[10],LastName[10];
	printf("Please entry First name:");
	scanf("%s",FirstName);
	fflush(stdin);
	printf("Please entry Last name:");
	scanf("%s",LastName);
	printf("Your name is %s %s\n",LastName, FirstName);
	return 0;
}
