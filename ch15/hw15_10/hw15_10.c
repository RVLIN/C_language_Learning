#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	printf("Input a number(8): ");
	scanf("%o",&a);

	printf("====== output ======\n");

	printf("a(8)\t%o\n",a);
	printf("a(10)\t%d\n",a);
	printf("a(16)\t%x\n",a);



	return 0;
}


