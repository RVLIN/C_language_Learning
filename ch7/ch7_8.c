#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number=100;
	int count;
	printf("1~100 7&3 can mod:");
	for(count=1;count<=number;count++)
	{
		if(count%7==0 && count%3==0) printf("%d ",count);
	}
	printf("\n");

	return 0;
}
