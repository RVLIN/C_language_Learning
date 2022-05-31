#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
void show_binary(int);
int main(void)
{
	int a;
	a=(89<<2);

	printf("89 binary is: ");
	show_binary(89);
	printf("after << 2 bit ");
	show_binary(a);
	printf("after <<2 bin decimal is %d\n",a);
	return 0;
}

void show_binary(int num)
{
	int i, b[SIZE]={0};
	for(i=1;i<=SIZE;i++)
	{
		b[SIZE-i]=num%2;
		num=num/2;
	}
	for(i=0;i<SIZE;i++)
		printf("%d",b[i]);
	printf("\n");
}

