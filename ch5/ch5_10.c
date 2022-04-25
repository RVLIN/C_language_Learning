#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=12,b=6;
	a/=b;
	printf("%d,%d\n",a,b);
	a=12;
	b=6;
	a*=b++;
	printf("%d,%d\n",a,b);
	a=12;
	b=6;
	a*=++b;
	printf("%d,%d\n",a,b);
	a=12;
	b=6;
	a*=b--;
	printf("%d,%d\n",a,b);
	a=12;
	b=6;
	a%=b;
	printf("%d,%d\n",a,b);

	
	return 0;
}
