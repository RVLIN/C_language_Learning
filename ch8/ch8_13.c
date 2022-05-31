#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double my_fun(int);

int main(void)
{
	int number;
	printf("Please input a number:");
	scanf("%d",&number);
	printf("1/1!+1/2!+....+1/%d!=%.6f\n",number,my_fun(number));
}

double my_fun(int n)
{
	int cnt=0;
	double sum=0;
	double step=1;
	while(cnt<=n)
	{
		cnt++;
		for (int i=1; i<=cnt;i++)
		{
			step*=i;
		}
		sum+=(1/step);
		step=1;
		printf("add to 1/%d! value is %.6f\n",cnt,sum);
	}
	return sum;
}
