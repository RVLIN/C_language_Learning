#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=12,b=16;
	int arr[]={12,4,5,6};
	FILE *fptr;

	fptr=fopen("hw12_14.bin","wb");
	fwrite(&a,sizeof(int),1,fptr);
	fwrite(&b,sizeof(int),1,fptr);
	fwrite(arr,sizeof(int),4,fptr);

	fclose(fptr);
	printf("File have already writen\n");
	return 0;
}
