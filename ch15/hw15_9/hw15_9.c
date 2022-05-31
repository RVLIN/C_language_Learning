#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=159;
	int b=0147;
	int c=0x618A;

	printf("====== a ======\n");

	printf("a(10)\t%d\n",a);
	printf("a(8)\t%o\n",a);
	printf("a(16)\t%x\n",a);

	printf("===== b =====\n");
	printf("b(8)\t%o\n",b);
	printf("b(10)\t%d\n",b);
	printf("b(16)\t%x\n",b);

	printf("===== c =====\n");
	printf("c(16)\t%x\n",c);
	printf("c(10)\t%d\n",c);
	printf("c(8)\t%o\n",c);


	return 0;
}


