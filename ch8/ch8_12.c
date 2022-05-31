#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double my_fun(int);

int main(void)
{
	int number;
	printf("Please input a number:");
	scanf("%d",&number);
	printf("1/2+1/(2^2)+....+1/(2^%d)=%.6f\n",number,my_fun(number));
}

double my_fun(int n)
{
	int cnt=0;
	double sum=0;
	while(cnt<=n)
	{
		cnt++;
		sum+=(1/pow(2,cnt));
		printf("add to 1/(2^%d) value is %.6f\n",cnt,sum);
	}
	return sum;
}
