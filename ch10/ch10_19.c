#include <stdio.h>
#include <stdlib.h>

void ch_cnt(char *);

int main(void)
{
	char *ptr="We are best friends.";
	puts(ptr);
	ch_cnt(ptr);
		
}

void ch_cnt(char *arr)
{
	int cnt=0;
	while(*(arr+cnt)!='\0')
	{
		cnt++;
	}
	printf("char array have %d value\n",cnt);
}

