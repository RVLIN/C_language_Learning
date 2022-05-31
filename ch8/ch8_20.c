#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(void)
{
	int n;
	printf("Please input a number:");
	scanf("%d",&n);
	printf("1+2+3+....+%d=%d\n",n,sum(n));
	return 0;
}

int sum(int n)
{
	int sum_cnt=0;
	if(n==1)
		return n;
	else
		return sum_cnt=n+sum(n-1);
}

