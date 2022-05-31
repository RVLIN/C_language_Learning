#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=12,b=7;
	int *ptr1;
	printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d\n",a,b,ptr1,*ptr1);

	ptr1=&a;
	printf("ptr1=&a\n");
	printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d\n",a,b,ptr1,*ptr1);

	*ptr1=19;
	printf("*ptr1=19\n");
	printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d\n",a,b,ptr1,*ptr1);

	ptr1=&b;
	printf("ptr=&b\n");
	printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d\n",a,b,ptr1,*ptr1);

	b=16;
	printf("b=16\n");
	printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d\n",a,b,ptr1,*ptr1);

	*ptr1=12;
	printf("*ptr1=12\n");
	printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d\n",a,b,ptr1,*ptr1);

	a=17;
	printf("a=17\n");
	printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d\n",a,b,ptr1,*ptr1);

	ptr1=&a;
	printf("ptr1=&a\n");
	printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d\n",a,b,ptr1,*ptr1);

	a=b;
	printf("a=b\n");
	printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d\n",a,b,ptr1,*ptr1);

	*ptr1=63;
	printf("*ptr=63\n");
	printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d\n",a,b,ptr1,*ptr1);




	return 0;
}
