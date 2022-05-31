#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#define ENTER 10
#define MAX 80

int main(void)
{
	FILE *fptr_a,*fptr_b,*fptr_c;
	char str[MAX],ch;
	int i=0;
	fptr_a=fopen("/home/robin/C_Study/ch12/aa.txt","r");
	fptr_b=fopen("/home/robin/C_Study/ch12/bb.txt","r");
	fptr_c=fopen("/home/robin/C_Study/ch12/cc.txt","w");

	if(fptr_a != NULL)
	{
		while ( ( ch=getc(fptr_a) ) != EOF )
			putc(ch,fptr_c);
		while ( ( ch=getc(fptr_b) ) != EOF )
			putc(ch,fptr_c);

		fclose(fptr_a);
		fclose(fptr_b);
		fclose(fptr_c);
		printf("File had alread combine to cc.txt\n");
	}
	else
		printf("File open failed\n");

	return 0;
}
