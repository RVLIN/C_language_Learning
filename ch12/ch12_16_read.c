#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/io.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void)
{
	int a,b;
	int i,arr[4];
	int fptr;
	int bytes,num,sum=0;
	char str[3];
	int max=1;
	fptr=open("rand.bin",O_RDONLY);
	if (fptr!= -1)
	{
		printf("===========Output=========\n");
		printf("Read rand number and calculate average\n");
		printf("Rand numbers are: ");
		while((bytes=read(fptr,str,3))>0)
		{
			num=atoi(str);
			if(num>max)
				max=num;
			sum+=num;
			printf("%3d",num);
		}
		printf("\nMAX is %d",max);
		printf("\nAverage is %.2f: \n",(float)sum/10);
		close(fptr);

	}
	else
		printf("FILE open failed\n");


	close(fptr);

	return 0;
}
