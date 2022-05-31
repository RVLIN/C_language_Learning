#include <stdio.h>
#include <stdlib.h>

void ch_cnt(char *);
void lower_cnt(char *);

int main(void)
{
	char *ptr="We are best friends.";
	puts(ptr);
	ch_cnt(ptr);
	lower_cnt(ptr);
		
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

void lower_cnt(char *arr)
{
	int cnt=0,lower_cnt=0;
	while(*(arr+cnt)!='\0')
	{
		if(*(arr+cnt)>='a' && *(arr+cnt)<='z')
			lower_cnt++;
		cnt++;
	}
	printf("lower letter have %d\n",lower_cnt);

}
