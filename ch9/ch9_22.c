#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COL 4

void add(int A[ROW][COL],int B[ROW][COL],int C[ROW][COL]);
void input(int arr[ROW][COL]);
void display(int arr[ROW][COL]);

int main(void)
{
	int i=0,j=0,a[ROW][COL]={0},b[ROW][COL]={0},c[ROW][COL]={0};
	
	printf("Input A array\n");
	input(a);
	printf("Input B array\n");
	input(b);
	add(a,b,c);
	printf("***Output***\n");
	printf("A array\n");
	display(a);
	printf("B array\n");
	display(b);
	printf("C array\n");
	display(c);

	return 0;
}
void input(int arr[ROW][COL])
{
	int i=0,j=0;
	for(i=0;i<ROW;i++)
	{
		printf("Input %d ROW\n",i+1);
		do
        	{
	                printf("enter 5 positive number, reamin %2d number:",COL-j);

	                scanf("%d",&arr[i][j]);
        	        if(arr[i][j]<0)
                	        printf("Input number is not positive\n");
	                else
        	                j++;
	        }while(j<COL);
		j=0;
	}
}
void display(int arr[ROW][COL])
{
	int i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%2d",arr[i][j]);
		}
		printf("\n");
	}
}
void add(int A[ROW][COL],int B[ROW][COL],int C[ROW][COL])
{
	int i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}	
}
