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
			printf("input is a\n");
			break;
		case 'b':
			printf("input is b\n");
			break;
		default:
			printf("input is neither a nor b\n");
	}
	return 0;
}
