#include <stdio.h>
#include <stdlib.h>

#define ROW 4
#define COL 3

int main(void)
{
	int i,j;
	int A[ROW][COL]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	int MAX=A[0][0],MIN=A[0][0];

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			if(A[i][j]>=MAX)
				MAX=A[i][j];
			if(A[i][j]<=MIN)
				MIN=A[i][j];
		}
		printf("\n");
	}
	printf("MAX:%d, MIN:%d\n",MAX,MIN);
	return 0;
}
