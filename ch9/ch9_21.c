#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 5

double average(int arr[ROW][COL]);

int main(void)
{
	int i=0,j=0,a[ROW][COL];
	for(i=0;i<ROW;i++)
	{
		printf("Input %d ROW\n",i+1);
		do
        	{
	                printf("enter 5 positive number, reamin %2d number:",COL-j);

	                scanf("%d",&a[i][j]);
        	        if(a[i][j]<0)
                	        printf("Input number is not positive\n");
	                else
        	                j++;
	        }while(j<COL);
		j=0;

	}
	printf("***Output***\n");
	printf("Average is %2.2f\n",average(a));
	return 0;
}
double average(int arr[ROW][COL])
{
	int i,j;
	double sum=0;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			sum+=arr[i][j];
		}
	}	
	return sum/(ROW*COL);
}
