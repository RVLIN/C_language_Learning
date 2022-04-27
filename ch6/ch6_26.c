#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;

	number:
		printf("Please input a number:");
		scanf(" %d",&number);

	switch(number)
	{
		case 1:
			printf("spring\n");
			break;
		case 2:
			printf("summer\n");
			break;
		case 3:
			printf("alutum\n");
			break;
		case 4:
			printf("winter\n");
			break;
		default:
			printf("input error number, please input again.\n");
			goto number;
	}
	return 0;
}
