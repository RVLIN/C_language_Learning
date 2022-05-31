#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/io.h>
#include <sys/stat.h>


int main(void)
{
	int a=12,b=16;
	int arr[]={12,4,5,6};
	int fptr;

	fptr=open("hw12_12.bin",O_CREAT|O_WRONLY,S_IREAD);

	write(fptr,&a,sizeof(int));
	write(fptr,&b,sizeof(int));
	write(fptr,&arr,sizeof(arr));

	close(fptr);
	printf("File have already writen\n");
	return 0;
}
