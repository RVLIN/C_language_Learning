#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char cha;
	printf("Please input a or b:");
	scanf("%c",&cha);

	switch(cha)
	{
		case 'a':
		case 'A':
			printf("input is A\n");
			break;
		case 'b':
		case 'B':
			printf("input is B\n");
			break;
		default:
			printf("input is neither a nor b\n");
	}
	return 0;
}
