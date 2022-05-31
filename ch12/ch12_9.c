#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/io.h>
#include <sys/stat.h>
#include <unistd.h>
#define SIZE 16

int main(void)
{
	char buffer[SIZE];
	int f1,f2;
	int bytes;

	f1=open("/home/robin/C_Study/ch12/welcome.txt",O_RDONLY);
	f2=creat("/home/robin/C_Study/ch12/output2.txt",S_IWRITE);

	if((f1 != -1) && (f2 != -1))
	{
		while((bytes=read(f1,buffer,SIZE))>0)
		{
			write(f2,buffer,bytes);
		}
		close(f1);
		close(f2);
		printf("File already copied!\n");
	}
	else
		printf("FILE open failed\n");

	return 0;
}
