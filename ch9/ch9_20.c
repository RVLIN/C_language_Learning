#include <stdio.h>
#include <stdlib.h>

#define MAX 10
void count(int arr[]);


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
	count(arr);
}

void count(int arr[])
{
	int odd[MAX]={0},even[MAX]={0};
	int odd_count=0,even_count=0;
	char id[2][10]={"ODD","EVEN"};
	int j,z;
	for(j=0;j<MAX;j++)
	{
		if(arr[j]%2==0)
			odd[odd_count++]=arr[j];
		else
			even[even_count++]=arr[j];
	}
	for(j=0;j<2;j++)
	{
		puts(id[j]);
		if(j==0)
		{
			printf("ODD have %d :",odd_count);
			for(z=0;z<odd_count;z++)
			{
				printf(" %2d",odd[z]);
			}
			printf("\n");
		}
		if(j==1)
		{
			printf("EVEN have %d :",even_count);
			for(z=0;z<even_count;z++)
			{
				printf(" %2d",even[z]);
			}
			printf("\n");
		}
	}
}
