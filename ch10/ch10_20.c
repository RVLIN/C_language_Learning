#include <stdio.h>
#include <stdlib.h>

void ch_cnt(char *);

int main(void)
{
	int i;
	char *ptr[3]={"Tom","Lily","James Lee"};
	for(i=0;i<3;i++)
	{
		puts(ptr[i]);
		ch_cnt(ptr[i]);
	}
		
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

