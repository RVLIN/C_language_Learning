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
	}student[3];
	
	f1=open("score.bin",O_RDONLY );

	if((f1 != -1))
	{
		read(f1,&student,sizeof(student));
		for(int i=0;i<3;i++)
		{
			printf("Student name : %s\n",student[i].name);
			printf("Studnet score: %d\n",student[i].math);
		}
		close(f1);
	}
	else
		printf("File open failed\n");

	return 0;
}
