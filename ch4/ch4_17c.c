#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch1,ch2;
	printf("Please input first char:");
	scanf("%c",&ch1);
	fflush(stdin);

	printf("Please input second char:");
	scanf(" %c",&ch2);
	printf("ch1=%c, ch2=%c\n",ch1,ch2);

	return 0;
}
