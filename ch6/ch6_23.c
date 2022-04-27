#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	printf("Please input a number :");
	scanf("%d",&number);

	switch(number)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("It is a working day\n");
			break;
		case 6:
		case 7:
			printf("It is a day off\n");
			break;
		default:
			printf("input is error number\n");
	}
	return 0;
}
