#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num=atoi(argv[1]);

	if(argc==2)
		for(int i=0;i<num;i++)
			printf("Hello kitty\n");
	else
		printf("ERROR:argc=%d\n",argc);


	return 0;
}
	
