#include <stdio.h>
#include <stdlib.h>

#define ROW 4
#define COL 3

int main(void)
{
	int i,j;
	int A[ROW][COL]={{1,2,3},{4,5,6},{1,2,3},{4,5,6}};
	int B[ROW][COL]={{1,2,3},{4,5,6},{1,2,3},{4,5,6}};

	printf("Matrix A+B=\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%3d",A[i][j]+B[i][j]);
		}
		printf("\n");
	}
	return 0;
}
