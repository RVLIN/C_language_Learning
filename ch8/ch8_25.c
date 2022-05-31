#include <stdio.h>
#include <stdlib.h>

int fib(int);

int main(void)
{
	int n=5;
	printf("fib(%d)=%d\n",n,fib(n));
	return 0;
}

int fib(int n)
{
	static int cnt=0;
	int sum=0;
	int n_1=1,n_2=1;
	cnt++;
	printf("fib have be call %d time\n",cnt);
	if(n==1 || n==2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}

