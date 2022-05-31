#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		arr[i]=i+1;
	}
	for(int j=0;j<5;j++)
	{
		printf("arr[%d]=%d\n",j,arr[j]);
	}
	return 0;
}

