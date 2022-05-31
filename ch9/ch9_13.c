#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 5
#define MAX_ROW 2
#define MAX_COL 2

int main(void)
{
	int i,j,sale[ROW][COL];
	int sale_total[ROW]={0},product_total[COL]={0};
	int MAX[MAX_ROW][MAX_COL];
	MAX[0][0]=1;
	MAX[1][0]=97;
	MAX[0][1]=sale_total[0];
	MAX[1][1]=product_total[0];

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("Sales %d product %c outcome is: ",i+1,j+65);
			scanf("%d",&sale[i][j]);
		}
	}
	printf("***Output***\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			sale_total[i]+=sale[i][j];
			product_total[j]+=sale[i][j];
		}
		for(j=0;j<COL;j++)
		{
			if(product_total[j]>MAX[1][1])
			{
				MAX[1][0]=j+65;
				MAX[1][1]=product_total[j];
			}
		}
		if(sale_total[i]>MAX[0][1])
		{
			MAX[0][0]=i;
			MAX[0][1]=sale_total[i];
		}
	}	
	for(i=0;i<ROW;i++)printf("Sales %d total revernue is %d\n",i+1,sale_total[i]);
	for(j=0;j<COL;j++)printf("Product %c total outcome is %d\n",j+65,product_total[j]);
	printf("Best Sale is %d, revernue is %d\n",MAX[0][0],MAX[0][1]);
	printf("Best SELL product is %c, revernue is %d\n",MAX[1][0],MAX[1][1]);
	return 0;
}
