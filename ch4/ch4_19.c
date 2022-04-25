#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	char ch;

	printf("Input a int:");
	scanf(" %d",&num);
	setbuf(stdin,NULL);
	printf("Input a char:");
	ch=getchar();

	printf("num=%d, ASCII of ch=%d\n",num,ch);

	return 0;
}
