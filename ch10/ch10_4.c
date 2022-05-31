#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num=12.6f,*ptr;
	ptr=&num;

	printf("num=%f, &num=%p; ptr=%p, &ptr=%p\n",num,&num,ptr,&ptr);
	return 0;
}
