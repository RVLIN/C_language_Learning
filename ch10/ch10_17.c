#include <stdio.h>
#include <stdlib.h>
void display(int *);

int main(void)
{
	int A[5]={74,48,30,17,62};
	int i,min,max,max_index,min_index;
	int *ptr=A;
	min=max=*ptr;
	min_index=max_index=0;
	display(ptr);
	for(i=0;i<5;i++)
	{
		if(*(ptr+i)>max)
		{
			max=*(ptr+i);
			max_index=i;
		}
		if(*(ptr+i)<min)
		{
			min=*(ptr+i);
			min_index=i;
		}
	}
	printf("In A array, MAX index is %d, MIN index is %d\n",max_index,min_index);

	return 0;
}
void display(int *arr)
{
	for(int i=0;i<5;i++)
		printf("A[%d]=%d\n",i,*(arr+i));
}
