#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int length(char str[]);

int main(void)
{
	char str[MAX];
	int i=0;
	int a_cnt=0,e_cnt=0,i_cnt=0,o_cnt=0,u_cnt=0;
	printf("Input a string\n");
	fgets(str,MAX,stdin);

	printf("String char number:%d\n",length(str));
	return 0;
}

int length(char str[])
{
	int i=0;
	do
	{
		i++;
	}while(str[i]!='\0');
	return i-1;
}
