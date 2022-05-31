#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double b1=3.14;
	int num=5;

	printf("b1=%f, &b1=%p; num=%d, &num=%p\n",b1,&b1,num,&num);
	return 0;
}
