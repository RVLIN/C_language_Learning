#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char arr[][11]={"C language","C++","Java"};
	int i;
	for(i=0;i<3;i++)
		puts(arr[i]);
}
