#include <stdio.h>
#include <stdlib.h>
int prime (int);

int main(void)
{
	int number;
	printf("Please number:");
	scanf("%d",&number);
	printf("%d prime number is %d\n",number,prime(number));
	return 0;
}

int prime(int p)
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

