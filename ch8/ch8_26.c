#include <stdio.h>
#include <stdlib.h>

double power(double,int);

int main(void)
{
	double b;
	int n;
	printf("Please input two number (b,n):");
	scanf("%le,%d",&b,&n);
	printf("%.2f^%d=%.2f\n",b,n,power(b,n));
	return 0;
}

double power(double b,int n)
{
	static int cnt=0;
	cnt++;
	printf("power have be call %d time\n",cnt);
	if(n==1)
		return b;
	else
		return b*=power(b,n-1);
}

