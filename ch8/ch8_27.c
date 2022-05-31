#include <stdio.h>
#include <stdlib.h>

int fib(int);
int fib_2(int);
static int loop_for=0,loop_recursive=0;
int main(void)
{
	int n;
	for(n=1; n<=30;n++)
	{
		printf("fib(%d)=%d\n",n,fib(n));
		fib_2(n);
		printf("n=%d, for loop %d time, recursive %d time\n",n,loop_for,loop_recursive);
		loop_for=0;
		loop_recursive=0;
	}
	return 0;
}

int fib(int n)
{
	int cnt;
	int sum=0;
	int n_1=1,n_2=1;
	loop_recursive++;
	if(n==1 || n==2)
		return 1;
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
int fib_2(int n)
{
	int cnt;
	int sum=0;
	int n_1=1,n_2=1;
	if(n==1 || n==2)
		return 1;
	else
	{
		for(cnt=3;cnt<=n;cnt++)
		{
			sum=n_1+n_2;
			n_1=n_2;
			n_2=sum;
			loop_for++;
		}
		return sum;
	}
}

