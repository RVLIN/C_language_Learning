#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=12,b=7;
	int *ptr1, *ptr2;
	printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d, ptr2=%p, *ptr2=%2d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);

	ptr1=&b;
	printf("ptr1=&b\n");
        printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d, ptr2=%p, *ptr2=%2d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);
	
	ptr2=&a;
	printf("ptr2=&a\n");
        printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d, ptr2=%p, *ptr2=%2d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);

	*ptr1=4;
	printf("*ptr1=4\n");
        printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d, ptr2=%p, *ptr2=%2d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);

	a=16;
	printf("a=16\n");
        printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d, ptr2=%p, *ptr2=%2d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);

	*ptr2=12;
	printf("*ptr2=12\n");
        printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d, ptr2=%p, *ptr2=%2d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);

	ptr2=ptr1;
	printf("ptr2=ptr1\n");
        printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d, ptr2=%p, *ptr2=%2d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);

	*ptr1=19;
	printf("*ptr1=19\n");
        printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d, ptr2=%p, *ptr2=%2d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);

	ptr1=&a;
	printf("ptr1=&a\n");
        printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d, ptr2=%p, *ptr2=%2d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);

	a=7;
	printf("a=7\n");
        printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d, ptr2=%p, *ptr2=%2d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);

	*ptr2=*ptr1;
	printf("*ptr2=*ptr1\n");
        printf("a=%2d, b=%2d, ptr1=%p, *ptr1=%2d, ptr2=%p, *ptr2=%2d\n",a,b,ptr1,*ptr1,ptr2,*ptr2);




	return 0;
}
