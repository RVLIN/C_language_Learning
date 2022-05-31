#include <stdio.h>
#include <stdlib.h>

#define MAX 80

int main(void)
{
	FILE *fptr;
	char str[MAX];
	int bytes;
	
	fptr=fopen("/home/robin/C_Study/ch12/output.txt","r");

	while(!feof(fptr))
	{
		bytes=fread(str,sizeof(char),MAX,fptr);
		if(bytes<MAX)
			str[bytes]='\0';
		puts(str);
	}
	fclose(fptr);

	return 0;
}
	
