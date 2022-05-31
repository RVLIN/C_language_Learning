#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/io.h>
#include <sys/stat.h>


int main(void)
{
	int arr[]={11326,4445,15589,23740,76840};
	int fbin,ftxt;
	char str[5];
	ftxt=creat("hw12_18.txt",S_IWRITE);

	fbin=open("hw12_18.bin",O_CREAT|O_WRONLY,S_IREAD);
	if((ftxt != -1) && (fbin != -1))
	{
		for(int i=0;i<5;i++)
		{
			sprintf(str,"%d",arr[i]);
			write(ftxt,&str,sizeof(str));
		}
		write(fbin,&arr,sizeof(arr));
		close(fbin);
		close(ftxt);
		printf("File have already writen\n");
	}
	else
		printf("File open failed\n");
	return 0;
}
