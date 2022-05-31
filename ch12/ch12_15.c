#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a,b;
	int i,arr[4];
	FILE *fptr;

	fptr=fopen("hw12_14.bin","rb");
	fread(&a,sizeof(int),1,fptr);
	fread(&b,sizeof(int),1,fptr);
	fread(arr,sizeof(int),4,fptr);

	printf("a=%d\n",a);
	printf("b=%d\n",b);
	for(i=0;i<4;i++)
		printf("arr[%d]=%d\n",i,arr[i]);

	fclose(fptr);

	return 0;
}
