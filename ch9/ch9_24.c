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
		switch(str[i])
		{
			case 'a':
				a_cnt++;
				break;
			case 'e':
				e_cnt++;
				break;
			case 'i':
				i_cnt++;
				break;
			case 'o':
				o_cnt++;
				break;
			case 'u':
				u_cnt++;
				break;
		}
		i++;
	}while(str[i]!='\0');
	printf("\na:%d, e:%d, i:%d, o:%d, u:%d\n",a_cnt,e_cnt,i_cnt,o_cnt,u_cnt);
}
