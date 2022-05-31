#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=5,b=10;
	int *ptr1,*ptr2;

	ptr1=&a;
	printf("ptr1=&a\n");
	printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
	printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);
	
	ptr2=&b;
	printf("ptr2=&b\n");
        printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
        printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);

	*ptr1=7;
	printf("*ptr1=7\n");
        printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
        printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);

	*ptr2=32;
	printf("*ptr2=32\n");
        printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
        printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);

	a=17;
	printf("a=17\n");
        printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
        printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);

	ptr1=ptr2;
	printf("ptr1=ptr2\n");
        printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
        printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);

	*ptr1=9;
	printf("*ptr1=9\n");
        printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
        printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);

	ptr1=&a;
	printf("ptr1=&a\n");
        printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
        printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);

	a=64;
	printf("a=64\n");
        printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
        printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);

	*ptr2=*ptr1+5;
	printf("*ptr2=*ptr1+5\n");
        printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
        printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);

	ptr2=&a;
	printf("ptr2=&a\n");
        printf("a=%2d, b=%2d, *ptr1=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
        printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);


	return 0;
}
