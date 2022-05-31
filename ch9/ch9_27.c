#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int length(char str[]);
void reverse(char str[]);

int main(void)
{
	char str[MAX];
	int i=0;
	int a_cnt=0,e_cnt=0,i_cnt=0,o_cnt=0,u_cnt=0;
	printf("Input a string\n");
	fgets(str,MAX,stdin);
	reverse(str);
	printf("Revers string:");
	puts(str);
	return 0;
}

void reverse(char str[])
{
	int cnt=length(str);
	int p=0,q=cnt-1;
	char tmp;
	while(p!=q && p<q)
	{
		tmp=str[p];
		str[p]=str[q];
		str[q]=tmp;
		p++;
		q--;
	}
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
