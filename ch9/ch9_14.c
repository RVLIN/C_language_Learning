#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 4
#define M_ROW 2
#define M_COL 2

int main(void)
{
	int i,j;
//	float temp[ROW][COL];
	float temp[ROW][COL]= {	{18.2,17.3,15.0,13.4},
				{23.8,25.1,20.6,17.8},
				{20.6,21.5,18.4,15.7}};
	float time_total[ROW]={0},date_total[COL]={0};
	float M[M_ROW][M_COL];
	float MAX=temp[0][0],MIN=temp[0][0];
	M[0][0]=1; //MIN
	M[1][0]=1; //MAX
	M[0][1]=1; //MIN
	M[1][1]=1; //MAX


	/*
	for(i=0;i<ROW;i++)  // input temp value to Array
	{
		for(j=0;j<COL;j++)
		{
			printf("Time %d date %d temp is: ",i+1,j+1);
			scanf("%f",&temp[i][j]);
		}
	}
	*/

	printf("***Output***\n");
	printf("|  TIME |  1  |  2  |  3  |  4  |AVERAGE|");
	for(i=0;i<ROW+1;i++)
	{
		if(i<ROW)
		{
			printf("\n|%7d",i+1);
			for(j=0;j<COL+1;j++)
			{
				if(j<COL)
				{
					time_total[i]+=temp[i][j]; //time total
					date_total[j]+=temp[i][j]; //date total
					if(temp[i][j]>MAX)
					{
						MAX=temp[i][j];
						M[1][0]=j+1;
						M[1][1]=i+1;
					}
					if(temp[i][j]<MIN)
					{
						MIN=temp[i][j];
						M[0][0]=j+1;
						M[0][1]=i+1;
					}
					printf("|%3.2f",temp[i][j]); //print input data
				}
				else
					printf("|%7.2f|",time_total[i]/COL);
			}
		}
		else
		{
			printf("\n|AVERAGE");
			for(j=0;j<COL;j++)printf("|%3.2f",date_total[j]/ROW);
			printf("|");
		}
		
	}		
	printf("\nTemp higest is DATE:%.0f,TIME:%.0f\n",M[1][0],M[1][1]);
	printf("Temp lowest is DATE:%.0f,TIME:%.0f\n",M[0][0],M[0][1]);
	return 0;
}
