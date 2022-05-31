#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float arr[5];
	float sum=0;
	float MAX=arr[0],MIN=arr[0];
	for(int i=0;i<5;i++)
	{
		printf("Please input arr[%d] value:",i);
		scanf("%f",&arr[i]);
	}
	for(int j=0;j<5;j++)
	{
		if(arr[j]>MAX)
			MAX=arr[j];
		if(arr[j]<MIN)
			MIN=arr[j];
	}
	printf("Input MAX Is %.2f, MIN is %.2f\n",MAX,MIN);
	return 0;

}

