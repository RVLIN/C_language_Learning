#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x,y;
	int s;
	printf("Please input x,y value (example:x,y)\n");
	scanf("%d,%d",&x,&y);

	if(x>0 && y>0)
	{
		printf("1\n");
	}
	else if(x>0 && y<0)
	{
		printf("2\n");
	}
	else if(x<0 && y<0)
	{
		printf("3\n");
	}
	else if(x<0 && y>0)
	{
		printf("4\n");
	}
	else
	{
		printf("Origin\n");
	}


	return 0;
}
