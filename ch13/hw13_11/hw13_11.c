#include <stdio.h>
#include <stdlib.h>

#define SIZE 15

int main(void)
{
#ifdef SIZE
	#if SIZE > 20
		char str[SIZE]="Hello C language.";
	#elif SIZE >= 10 && SIZE <= 15
		char str[SIZE]="Welcome";
	#else
		char *str="SIZE too small";
	#endif
#else
	char *str="SIZE not defined";
#endif

	printf("%s\n",str);

	return 0;
}
