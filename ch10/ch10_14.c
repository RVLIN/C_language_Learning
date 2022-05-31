#include <stdio.h>
#include <stdlib.h>


#define MAX 5
void add10(int *);
void display(int *);

int main(void)
{

	int a[MAX]={34,76,33,42,76};
	display(a);
	for(int i=0;i<MAX;i++)
		*(a+i)+=10;	
	display(a);
	return 0;
}
void add10(int *arr)
{
	for(int i=0;i<MAX;i++)
		*(arr+i)+=10;
}
void display(int *arr)
{
	for(int i=0; i<MAX;i++)
		printf("a[%d]=%d\n",i,*(arr+i));
}
