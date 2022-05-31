#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/io.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

#define SIZE 8

int main(void)
{
	char str[3];
	int f1,f2;
	int bytes,rand_num;
	char rand_str[3];
	srand(time(NULL));
	f2=creat("/home/robin/C_Study/ch12/rand.txt",S_IWRITE);
	if (f2!= -1)
	{
		printf("Write rand number to rand.txt\n");
		printf("Rand numbers are:");
		for(int i=0;i<10;i++)
		{
			rand_num=(rand()%64)+1;
			printf("%3d",rand_num);
			sprintf(rand_str,"%d",rand_num);
			write(f2,rand_str,sizeof(rand_str));
		}
		printf("\n");
		close(f2);

	}
	else
		printf("FILE open failed\n");

	return 0;
}
