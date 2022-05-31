#include <stdio.h>
#include <stdlib.h>

int insertElement(int *arr, int item, int pos,int length);
void show(int *arr, int );
int main(void)
{
	int arr[5]={12,56,37,63};
	int item=10;
	int pos=2;
	int length=4;
	show(arr,length);
	length=insertElement(arr, item, pos, length);
	show(arr,length);


}

void show(int *arr, int cnt)
{
	for(int i=0; i<cnt; i++)
		printf("arr[%d]=%d\n",i,*(arr+i));
}

int insertElement(int *arr, int item, int pos, int length)
{
	int tmp;
	for(int i=length; i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=item;

	return length+1;
}
