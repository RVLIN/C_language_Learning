#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int min(int arr[]);


int main(void)
{
	int arr[MAX]={0};
	int i=0;

	do
	{
		printf("enter 10 positive number, reamin %d number:",MAX-i);

		scanf("%d",&arr[i]);
		if(arr[i]<0)
			printf("Input number is not positive\n");
		else
			i++;
	}while(i<MAX);

	printf("Min number index is %d\n",min(arr));
}

int min(int arr[])
{
	int j,min=arr[0],min_index;
	for(j=0;j<MAX;j++)
	{
		if(min>arr[j])
		{
			min=arr[j];
			min_index=j;
		}
	}
	return min_index;
}
