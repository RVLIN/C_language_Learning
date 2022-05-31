#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,sale[2][4],sum=0,saler_total[2]={0,0};

	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Sales %d in %dth revernue:",i+1,j+1);
			scanf("%d",&sale[i][j]);
		}
	}
	printf("***Output***");
	for(i=0;i<2;i++)
	{
		printf("\nSales %d revernue division is:",i+1);
		for(j=0;j<4;j++)
		{
			printf(" %d",sale[i][j]);
			sum+=sale[i][j];
			saler_total[i]+=sale[i][j];
		}
	}	
	printf("\n Sale-1 2004 total income are %d car, Sale-2 2004 total income are %d car\n",saler_total[0],saler_total[1]);

	return 0;
}
