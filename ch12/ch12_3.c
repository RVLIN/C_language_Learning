#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr;
	char ch;
	int count=0;

	fptr=fopen("/home/robin/C_Study/ch12/welcome.txt","r");
	if ( fptr != NULL )
	{
		while ( ( ch=getc(fptr) ) != EOF )
		{
			printf("%c",ch);
			count++;
		}
		fclose(fptr);
		printf("\nTotally have %d char\n",count);
	}
	else
		printf("File open failed\n");
	return 0;
}
