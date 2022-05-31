#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int sum=0;
	for (int i=1; i<=100;i++)
	{
		if(i%3==0 && i%8==0) sum+=i;
	}
	printf("1~100 can be 3 and 8 int sum is:%d\n",sum);
	return 0;
}
