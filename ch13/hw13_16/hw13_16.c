#include <stdio.h>
#include <stdlib.h>

#define READ_MAX 5

int main(int argc, char *argv[])
{
	FILE *fptr;
	char ch[READ_MAX];
	int count=0;

	fptr=fopen(argv[1],"r");
	if ( fptr != NULL )
	{
		while ( ( fgets(ch,READ_MAX,fptr) ) != NULL )
			printf("%s",ch);
		fclose(fptr);
	}
	else
		printf("File open failed\n");
	return 0;
}
