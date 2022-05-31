#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[3];
	for(int i=0;i<3;i++)
	{
		printf("Please input arr[%d] value:",i);
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<3;j++)
	{
		printf("arr[%d]=%d\n",j,arr[j]);
	}
	return 0;
}

