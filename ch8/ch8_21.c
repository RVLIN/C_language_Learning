#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(void)
{
	int n;
	printf("Please input a number:");
	scanf("%d",&n);
	printf("2+4+6+....+%d=%d\n",2*n,sum(n));
	return 0;
}

int sum(int n)
{
	int sum_cnt=0;
	if(n==1)
		return 2*n;
	else
		return sum_cnt=2*n+sum(n-1);
}

