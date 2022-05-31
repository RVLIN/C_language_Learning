#include <stdio.h>
#include <stdlib.h>

#define MAX 10
void square(int arr[]);


int main(void)
{
	int arr[MAX]={0};
	int i=0;

	do
	{
		printf("enter 10 positive number, reamin %2d number:",MAX-i);

		scanf("%d",&arr[i]);
		if(arr[i]<0)
			printf("Input number is not positive\n");
		else
			i++;
	}while(i<MAX);
	square(arr);
}

void square(int arr[])
{
	int j;
	for(j=0;j<MAX;j++)
	{
		arr[j]*=arr[j];
		printf("Array index:%d ,square value:%d\n",j,arr[j]);
	}
}
