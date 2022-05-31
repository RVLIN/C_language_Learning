#include <stdio.h>
#include <stdlib.h>

#define READ_MAX 5

int main(void)
{
	FILE *fptr1,*fptr2;
	char ch[READ_MAX];
	int count=0;

	fptr1=fopen("/home/robin/C_Study/ch12/welcome.txt","r");
	fptr2=fopen("/home/robin/C_Study/ch12/output_fgets.txt","w");
	if (( fptr1 != NULL ) && (fptr2 != NULL))
	{
		while ( ( fgets(ch,READ_MAX,fptr1) ) != NULL )
			fputs(ch,fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("File had copied\n");
	}
	else
		printf("File open failed\n");
	return 0;
}
