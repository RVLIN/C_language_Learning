#include <stdio.h>
#include <stdlib.h>


#define MAX 10
void square(int *);
void display(int *);

int main(void)
{

	int a[MAX]={1,2,3,4,5,6,7,8,9,10};
	display(a);	
	square(a);
	display(a);
	return 0;
}
void square(int *arr)
{
	for(int i=0;i<MAX;i++)
		*(arr+i)=(*(arr+i))*(*(arr+i));
}
void display(int *arr)
{
	for(int i=0; i<MAX;i++)
		printf("a[%d]=%d\n",i,*(arr+i));
}
