#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#define ENTER 10
#define MAX 80

int main(void)
{
	FILE *fptr;
	char str[MAX],ch;
	int i=0;
	fptr=fopen("/home/robin/C_Study/ch12/output.txt","a");

	printf("Please input a string, until press Enter: \n");
	if(fptr != NULL)
	{
		while( ((ch = getchar()) != ENTER) && i<MAX)
			str[i++]=ch;
		putc('\n',fptr);
		fwrite(str,sizeof(char),i,fptr);
		fclose(fptr);
		printf("File had alread attched new char\n");
	}
	else
		printf("File open failed\n");

	return 0;
}
