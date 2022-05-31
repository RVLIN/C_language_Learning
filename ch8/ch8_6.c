#include <stdio.h>
#include <stdlib.h>

int power(int,int);

int main(void)
{
	int number1,number2;
	printf("Input 2 numbers(x,y):");
	scanf("%d,%d",&number1,&number2);
	printf("%d ^ %d = %d\n",number1,number2,power(number1,number2));
	return 0;
}

int power(int k,int j)
{
	int cnt;
	int k_init=k;
	for(cnt=1;cnt<j;cnt++)k*=k_init;
	return k;
}
