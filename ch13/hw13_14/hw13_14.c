#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char ch=argv[1][0];

	if(argc==2)
		printf("C:%c, ASCII:%d\n",ch,ch);
	else
		printf("ERROR:argc=%d\n",argc);


	return 0;
}
	
