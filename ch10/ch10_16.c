#include <stdio.h>
#include <stdlib.h>
void display(int *);

int main(void)
{
	int A[5]={74,48,30,17,62};
	int i,min,max;

	min=max=(*A);
	display(A);
	for(i=0;i<5;i++)
	{
		if(*(A+i)>max)
			max=*(A+i);
		if(*(A+i)<min)
			min=*(A+i);
	}
	printf("In A array, MAX is %d, MIN is %d\n",max,min);

	return 0;
}
void display(int *arr)
{
	for(int i=0;i<5;i++)
		printf("A[%d]=%d\n",i,*(arr+i));
}
