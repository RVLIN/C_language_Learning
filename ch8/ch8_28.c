#include <stdio.h>
#include <stdlib.h>

void counter(void);
int cnt=0;
int main(void)
{
	counter();
	counter();

	return 0;
}

void counter(void)
{
	cnt++;
	printf("counter have be call %d time\n",cnt);
}
