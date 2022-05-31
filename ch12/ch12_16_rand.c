#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/io.h>
#include <sys/stat.h>
#include <time.h>


int main(void)
{
	char rand_str[3];
	int rand_num;
	int fptr;
	srand(time(NULL));
	fptr=open("rand.bin",O_CREAT|O_WRONLY,S_IREAD);
	printf("Write rand number to rand.bin\n");
	printf("Rand numbers are:");
	for(int i=0;i<10;i++)
	{
		rand_num=(rand()%64)+1;
		printf("%3d",rand_num);
		sprintf(rand_str,"%d",rand_num);
		write(fptr,rand_str,sizeof(rand_str));
	}
	printf("\n");

	close(fptr);
	printf("File have already writen\n");
	return 0;
}
