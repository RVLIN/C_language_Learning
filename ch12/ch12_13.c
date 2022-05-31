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

	fptr=open("hw12_12.bin",O_RDONLY);
	read(fptr,&a,sizeof(int));
	read(fptr,&b,sizeof(int));
	read(fptr,&arr,sizeof(arr));

	printf("a=%d\n",a);
	printf("b=%d\n",b);
	for(i=0;i<4;i++)
		printf("arr[%d]=%d\n",i,arr[i]);

	close(fptr);

	return 0;
}
