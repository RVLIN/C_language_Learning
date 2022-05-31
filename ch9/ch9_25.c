#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main(void)
{
	char str[MAX];
	int i=0;
	int a_cnt=0,e_cnt=0,i_cnt=0,o_cnt=0,u_cnt=0;
	printf("Input a string\n");
	fgets(str,MAX,stdin);

	do
	{
		if(str[i]>='A' && str[i]<='Z')
			str[i]+=32;
		i++;
	}while(str[i]!='\0');

	printf("Transmit string:\n");
	puts(str);
	return 0;
}
