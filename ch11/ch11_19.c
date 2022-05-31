#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char key,ch;
	enum color
	{
		red=114,
		RED=114-32,
		green=103,
		GREEN=103-32,
		blue=98,
		BLUE=98-32
	}shirt;

	do
	{
		printf("Input r,g, or b: ");
		scanf("%c",&key);
		while((ch=getchar())!='\n'&&ch!=EOF);
	}while((key!=red)&&(key!=RED)&&(key!=green)&&(key!=GREEN)&&(key!=blue)&&(key!=BLUE));
	
	shirt=key;

	switch(shirt)
	{
		case RED:
		case red:
			printf("You choose red\n");
			break;
		case GREEN:
		case green:
			printf("You choose green\n");
			break;
		case BLUE:
		case blue:
			printf("You choose blue\n");
			break;
	}
	return 0;
}
