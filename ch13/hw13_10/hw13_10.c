#include <stdio.h>
#include <stdlib.h>

#define STR "Hello C language.\n"

int main(void)
{
	#ifndef STR
		printf("STR have not define\n");
	#else
		printf(STR);
	#endif

	return 0;
}
