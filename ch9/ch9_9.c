#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,sale[2][4],total_sum=0,th_sum=0;

	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Sales %d in %dth revernue:",i+1,j+1);
			scanf("%d",&sale[i][j]);
		}
	}
	printf("***Output***");
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			total_sum+=sale[j][i];
			th_sum+=sale[j][i];
		}
		printf("\nSales %dthe revernue division is:%d",i+1,th_sum);
		th_sum=0;

	}	
	printf("\n2004 total income are %d car\n",total_sum);

	return 0;
}
