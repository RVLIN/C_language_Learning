#include <stdio.h>
#include <stdlib.h>

int find_k(int);

int main(void)
{
	int number;
	printf("Please input a number:");
	scanf("%d",&number);
	printf("4*%d+2 more close %d\n",find_k(number),number);
	return 0;
}

int find_k (int n)
{
	int cnt=0;
	int min_k=1,over_k=1;
	do
	{
		cnt++;

		if((4*cnt+2)<n)min_k=cnt;
		else over_k=cnt;

	}while ( (4*cnt+2)<n);

	if((n-(4*min_k+2))>((4*over_k+2)-n))return over_k;
	else return min_k;

}
