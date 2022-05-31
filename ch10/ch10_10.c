#include <stdio.h>
#include <stdlib.h>

void count(int *);

int main(void)
{
	int num=0;
	int *ptr=&num;
	for(int i=0;i<10;i++)
	{
		count(ptr);
		printf("count have be call %d time, num=%d,*ptr=%d\n",num,num,*ptr);
	}

	return 0;
}
void count (int *p1)
{
	(*p1)++;
}
