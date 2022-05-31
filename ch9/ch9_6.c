#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[]={3,5,0,3,2,4,1,6,8,5,4,3,2};
	int cnt=0;
	printf("arr have %ld int number.\n",sizeof(arr)/4);
	for(int j=0;j<(sizeof(arr)/4);j++)
	{
		if(arr[j]>=3 && arr[j]<=6)cnt++;
	}
	printf("arr 3~6 number have: %d\n",cnt);
	return 0;
}

