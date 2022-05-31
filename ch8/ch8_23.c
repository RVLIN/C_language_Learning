#include <stdio.h>
#include <stdlib.h>

int f(int);

int main(void)
{
	int n;
	printf("Please input a number:");
	scanf("%d",&n);
	printf("f(%d)=2f(%d-1)-5=%d\n",n,n,f(n));
	return 0;
}

int f(int n)
{
	if(n==0)
		return 3;
	else
		return 2*f(n-1)-5;
}

