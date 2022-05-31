#include <stdio.h>
#include <stdlib.h>

int mod(int,int);

int main(void)
{
	int number1,number2;
	printf("Input 2 numbers(x,y):");
	scanf("%d,%d",&number1,&number2);
	printf("%d %% %d = %d\n",number1,number2,mod(number1,number2));
	return 0;
}

int mod(int k,int j)
{
	return k%j;
}
