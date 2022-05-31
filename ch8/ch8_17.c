#include <stdio.h>
#include <stdlib.h>
double prime (int);
double find_k(int);
double pi(int);
int main(void)
{
	int number;
	printf("Please number:");
	scanf("%d",&number);
	printf("pi/2 is  %.16f\n",pi(number));
	return 0;
}


double pi(int n)
{
	int cnt=2;
	double sum=1;
	double prime_number;
	while(cnt<=n)
	{
		prime_number=prime(cnt);
		sum=sum*(prime_number/find_k(prime_number));
		cnt++;
	}
	return sum*2;
}

double prime(int p)
{
	int prime_cnt,prime_detect=0;
	int cnt=1;
	int number=1;
	while (cnt<=p)
	{
		number++;
                for(prime_cnt=1;prime_cnt<=number;prime_cnt++)
                {
                        if(number%prime_cnt==0) prime_detect++;
                }
                if(prime_detect==2)
                {
                        cnt++;
                        prime_detect=0;
                }
                else
                {
                        prime_detect=0;
                }
	}
	return number;
}

double find_k (int n)
{
	int cnt=0;
	int min_k=1,over_k=1;
	do
	{
		cnt+=2;
		if(cnt%4!=0)
		{
			if(cnt<n)min_k=cnt;
			else over_k=cnt;
		}

	}while ( cnt<=n+2);
	if((n-min_k)>(over_k-n))return over_k;
	else return min_k;

}

