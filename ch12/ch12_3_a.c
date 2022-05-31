#include <stdio.h>
#include <stdlib.h>

#define READ_MAX 5

int main(void)
{
	FILE *fptr;
	char ch[READ_MAX];
	int count=0;

	fptr=fopen("/home/robin/C_Study/ch12/welcome.txt","r");
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
