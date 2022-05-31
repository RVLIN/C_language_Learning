#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct status
	{
		unsigned sex:1;
		unsigned marriage:1;
		unsigned age:7;
		unsigned money:24;
	};
	struct status tom;

	printf("sizeof(tom)=%ld\n",sizeof(tom));

	return 0;
}

