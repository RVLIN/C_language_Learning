#include <stdio.h>
#include <stdlib.h>

int fib(int);

int main(void)
{
	int n;
	for(n=1; n<=50;n++)
	{
		printf("fib(%d)=%d\n",n,fib(n));
	}
	return 0;
}

int fib(int n)
{
	int cnt;
	int sum=0;
	int n_1=1,n_2=1;
	if(n==1 || n==2)
		return 1;
	else
		for(cnt=3;cnt<=n;cnt++)
		{
			sum=n_1+n_2;
			n_1=n_2;
			n_2=sum;
		}
		return sum;
}

