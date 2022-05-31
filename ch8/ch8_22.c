#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main(void)
{
	int n;
	printf("Please input a number:");
	scanf("%d",&n);
	printf("1*2+2*3+3*4+....+(%d-1)*%d=%d\n",n,n,sum(n));
	return 0;
}

int sum(int n)
{
	int sum_cnt=0;
	if(n==1 || n==2)
		return n;
	else
		return sum_cnt=n*(n-1)+sum(n-1);
}

