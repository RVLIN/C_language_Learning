#include <stdio.h>
#include <stdlib.h>

void ch_cnt(char *);

int main(void)
{
	int i;
	char str[2][20]={"Time is money","Have a good time"};
	for(i=0;i<2;i++)
	{
		puts(str[i]);
	}	
}
