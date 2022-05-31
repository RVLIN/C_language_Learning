#include <stdio.h>
#include <stdlib.h>

#define HIGH 4
#define ROW  2
#define COL  3

int main(void)
{
	int A[HIGH][ROW][COL]={{{1,2,3},{4,5,6}},
				{{7,8,9},{10,11,12}},
				{{13,14,15},{16,17,18}},
				{{19,20,21},{22,23,24}}};

	int x,y,z,sum=0;

	for(z=0;z<HIGH;z++)
	{
		printf("\n");
		for(y=0;y<ROW;y++)
		{
			for(x=0;x<COL;x++)
			{
				printf(" %2d",A[z][y][x]);
				sum+=A[z][y][x];
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("Array SUM is %d\n",sum);
	return 0;
}

