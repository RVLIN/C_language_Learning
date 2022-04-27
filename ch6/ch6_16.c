#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	double x1,x2;
	double a,b,c;
	printf("function: a*x^2+b*x+c=0, please input a,b,c (example:1,2,3)");
	scanf("%le,%le,%le",&a,&b,&c);
	if(b*b-4*a*c>0)
	{
		x1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
		x2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
		printf("x1=%f,x2=%f\n",x1,x2);
	}
	if(b*b-4*a*c==0)
	{
		x1=-(b/2*a);
		printf("x1=x2=%f\n",x1);
	}
	if(b*b-4*a*c<0)
	{
		printf("answer is null\n");
	}	

	return 0;
}
