#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int month;
	printf("Please input month number:\n");
	scanf("%d",&month);

	if(month>=3 && month<=5)
	{
		printf("%d is Spring\n",month);
	}
	else if(month>=6 && month<=8)
	{
		printf("%d is Summer\n",month);
	}
	else if(month>=9 && month<=11)
	{
		printf("%d is Autumn\n",month);
	}
	else if(month==12 || month==1 || month==2)
	{
		printf("%d is Winter\n",month);
	}
	else
	{
		printf("error value\n");
	}


	return 0;
}
