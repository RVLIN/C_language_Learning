#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

int main(void)
{
	char ch;

	printf("Input a char:");
	ch=getche();
	printf("Your Input is:");
	putchar(ch);
	putchar('\n');
	printf("Input a char:");
	ch=getch();
	printf("Your Input is:");
	putchar(ch);
	putchar('\n');


	return 0;
}
