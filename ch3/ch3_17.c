#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("578:%ld\n",sizeof(578));
	printf("784000000:%ld\n",sizeof(784000000));
	printf("6.78f:%ld\n",sizeof(6.78f));
	printf("718.26:%ld\n",sizeof(718.26));
	printf("6.42e127:%ld\n",sizeof(6.42e127));
}

