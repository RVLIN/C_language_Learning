#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num=4.2f;
	int a1=4, a2=12;

	printf("num=%f, &num=%p; a1=%d, &a1=%p; a2=%d, &a2=%p\n",num,&num,a1,&a1,a2,&a2);
	return 0;
}
