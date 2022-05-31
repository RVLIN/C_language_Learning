#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr1,*fptr2;
	char ch;
	int count=0;

	fptr1=fopen("/home/robin/C_Study/ch12/welcome.txt","r");
	fptr2=fopen("/home/robin/C_Study/ch12/output.txt","w");

	if (( fptr1 != NULL ) && ( fptr2 !=NULL))
	{
		while ( ( ch=getc(fptr1) ) != EOF )
		{
			putc(ch,fptr2);	
			count++;
		}
		fclose(fptr1);
		fclose(fptr2);
		printf("\nTotally have %d char\n",count);
		printf("File had Copied\n");
	}
	else
		printf("File open failed\n");
	return 0;
}
