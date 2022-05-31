#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/io.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void)
{
	int f1;
	struct data
	{
		char name[10];
		int math;
	}student[3]={{"Jenny",96},{"Tim",50},{"Robin",90}};

	f1=open("score.bin",O_CREAT | O_WRONLY, S_IREAD);
	if((f1 != -1))
	{
		write(f1,&student,sizeof(student));
		close(f1);
		printf("Data have already written\n");
	}
	else
		printf("File open failed \n");

	return 0;
}
