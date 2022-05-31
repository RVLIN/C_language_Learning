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
	int bytes,num,sum=0;
	char rand_str[3];
	f2=open("/home/robin/C_Study/ch12/rand.txt",O_RDONLY);
	if (f2!= -1)
	{
		printf("===========Output=========\n");
		printf("Read rand number and calculate average\n");
		printf("Rand numbers are: ");
		while((bytes=read(f2,str,3))>0)
		{
			num=atoi(str);
			sum+=num;
			printf("%3d",num);
		}
		printf("\nAverage is %.2f: \n",(float)sum/10);
		close(f2);

	}
	else
		printf("FILE open failed\n");

	return 0;
}
