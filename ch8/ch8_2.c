#include <stdio.h>
#include <stdlib.h>

void kitty(int);

int main(void)
{
	int line;
	printf("Input line number:");
	scanf("%d",&line);
	kitty(line);
	return 0;
}

void kitty(int k)
{
	for(int i=1;i<=k;i++)printf("Hello Kitty\n");
}
