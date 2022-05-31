#include <stdio.h>
#include <stdlib.h>

#define HIGH 3
#define ROW  4
#define COL  5
#define MAX 3
#define LENGTH 10

void add_30(int a[][ROW][COL],int);
void cut_30(int a[][ROW][COL],int);

char color[MAX][LENGTH]={"<Red>","<Green>","<Blue>"};

int main(void)
{
	int A[HIGH][ROW][COL]={{{247,67,32,187,240},
				{122,41,21,16,154},
				{52,35,79,21,93},
				{27,22,35,154,75}},
			       {{14,145,132,25,40},
				{212,221,121,54,14},
				{132,235,178,19,14},
				{122,122,133,54,47}},
			       {{17,44,32,127,240},
				{22,231,21,156,124},
				{32,35,78,21,194},
				{127,22,33,54,45}}};

	int x,y,z,sum=0;
	
	printf("Problem A\n");

	for(z=0;z<HIGH;z++)
	{
		puts(color[z]);
		for(y=0;y<ROW;y++)
		{
			for(x=0;x<COL;x++)
			{
				printf(" %3d",A[z][y][x]);
			}
			printf("\n");
		}
		printf("\n");
	}
	add_30(A,0);
	cut_30(A,1);

	return 0;
}

void add_30(int a[][ROW][COL],int add_arr)
{
	int x,y,z;
	printf("Problem B\n");

	for(z=0;z<HIGH;z++)
	{
		puts(color[z]);
		if(z==add_arr)
		{
			for(y=0;y<ROW;y++)
			{
				for(x=0;x<COL;x++)
				{
					if((a[z][y][x]+30)>=255)
					{
						a[z][y][x]=255;
						printf(" %3d",a[z][y][x]);
					}
					else
					{
						a[z][y][x]+=30;
						printf(" %3d",a[z][y][x]);
					}
				}
				printf("\n");
			}
			printf("\n");
		}
		else
		{
			for(y=0;y<ROW;y++)
			{
				for(x=0;x<COL;x++)
				{
						printf(" %3d",a[z][y][x]);
				}
				printf("\n");
			}
			printf("\n");
		}
	}		
}
void cut_30(int a[][ROW][COL],int cut_arr)
{
	int x,y,z;

	printf("Problem C\n");
	for(z=0;z<HIGH;z++)
	{
		puts(color[z]);
		if(z==cut_arr)
		{
			for(y=0;y<ROW;y++)
			{
				for(x=0;x<COL;x++)
				{
					if((a[z][y][x]-30)<=0)
					{
						a[z][y][x]=0;
						printf(" %3d",a[z][y][x]);
					}
					else
					{
						a[z][y][x]-=30;
						printf(" %3d",a[z][y][x]);
					}
				}
				printf("\n");
			}
			printf("\n");
		}
		else
		{
			for(y=0;y<ROW;y++)
			{
				for(x=0;x<COL;x++)
				{
						printf(" %3d",a[z][y][x]);
				}
				printf("\n");
			}
			printf("\n");
		}
	}		
}
