#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr,*num;

	num=(int *)malloc(sizeof(int));
	*num=12;
	ptr=num;
	printf("num^2=%d\n",(*num)*(*num));
	
	free(num);

	return 0;
}
