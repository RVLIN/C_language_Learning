#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double my_fun(double,double);
double step(int);
double power (double,int);


int main(void)
{
	double number_x,number_n;
	printf("Please input two numbers(x,n):");
	scanf("%lf,%lf",&number_x,&number_n);
	printf("1/1!+1/2!+....+(%.0f^%.0f)/%.0f!=%.9f\n",number_x,number_n,number_n,my_fun(number_x,number_n));
}

double my_fun(double x, double n)
{
	int cnt=0;
	double sum=0;
	while(cnt<n)
	{
		cnt++;
		sum+=(power(x,cnt)/step(cnt));
		printf("add to %.8f/%d! value is %.8f\n",power(x,cnt),cnt,sum);
	}
	return sum;
}

double step (int s)
{
	double step_sum=1;
	for (int i=1; i<=s;i++)
	{
		step_sum*=i;
	}
	return step_sum;

}

double power(double k,int j)
{
        double cnt;
        double k_init=k;
        for(cnt=1;cnt<j;cnt++)k*=k_init;
        return k;
}

