#include <stdio.h>
#include <stdlib.h>

void counter(void);

int main(void)
{
	counter();
	counter();

	return 0;
}

void counter(void)
{
	static int cnt=0;
	cnt++;
	printf("counter have be call %d time\n",cnt);
}
