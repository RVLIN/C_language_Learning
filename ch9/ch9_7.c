#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float arr[5];
	float sum=0;
	for(int i=0;i<5;i++)
	{
		printf("Please input arr[%d] value:",i);
		scanf("%f",&arr[i]);
	}
	for(int j=0;j<5;j++)
	{
		sum+=arr[j];
	}
	printf("Input average is %.2f\n",sum/5);
	return 0;

}

