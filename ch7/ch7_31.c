#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	for (i=1;i<=100;i++)
	{
		if(i%12==0)continue;
		if(i%2==0 && i%3==0)printf("%d ",i);
	}
	printf("\n");
	return 0;
}
