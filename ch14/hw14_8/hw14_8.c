#include <stdio.h>
#include <stdlib.h>

int deleteElement(int *arr, int pos,int length);
void show(int *arr, int );
int main(void)
{
	int arr[5]={12,56,37,63};
	int item=10;
	int pos=1;
	int length=4;
	show(arr,length);
	length=deleteElement(arr, pos, length);
	show(arr,length);


}

void show(int *arr, int cnt)
{
	for(int i=0; i<cnt; i++)
		printf("arr[%d]=%d\n",i,*(arr+i));
}

int deleteElement(int *arr, int pos, int length)
{
	int tmp;
	for(int i=0; i<length-1;i++)
	{
		if(i>=pos)
			arr[i]=arr[i+1];
	}

	return length-1;
}
