#include <stdio.h>
#include <stdlib.h>

void display(char *,int);

int main(void)
{
	char *ptr="We are best friends.";
	puts(ptr);
	display(ptr,5);
		
}

void display(char *arr,int n)
{
	int cnt=0;
	while(*(arr+n)!='\0')
	{
		printf("%c",*(arr+n));
		n++;
	}
	printf("\n");
}

