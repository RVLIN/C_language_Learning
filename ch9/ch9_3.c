#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[5]={2,3,1,7,9};
	for(int j=0;j<5;j++)
	{
		printf("arr[%d]=%d\n",j,arr[j]);
	}
	printf("size: %ld\n",sizeof(arr));
	return 0;
}

