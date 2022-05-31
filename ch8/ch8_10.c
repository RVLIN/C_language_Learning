#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime (int);
int m_prime(unsigned int);

int main(void)
{
	int number;
	printf("Please number:");
	scanf("%d",&number);
	prime(number);
	return 0;
}

int prime(int p)
{
	int prime_cnt,prime_detect=0;
	int cnt=1;
	unsigned int number=1;
	while (cnt<=p)
	{
		number++;
                for(prime_cnt=1;prime_cnt<=number;prime_cnt++)
                {
                        if(number%prime_cnt==0) prime_detect++;
                }
                if(prime_detect==2)
                {
	               	if(m_prime(number)!=32)
			{
				printf("%d m_prime is %d\n",cnt,number);
				cnt++;
			}
                        prime_detect=0;
                }
                else
                {
                        prime_detect=0;
                }
	}
	return number;
}

int m_prime(unsigned int p)
{
	int number;
	for(number=0;number<32;number++)
	{
		if((pow(2,number)-1)==p) break;
	}
	return number;
}
