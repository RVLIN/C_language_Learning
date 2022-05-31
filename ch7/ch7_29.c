#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input;
	int cnt=0;
	int passwd=6128;
	while(1)
	{
		printf("Please enter your password:");
		scanf("%d",&input);
		if(cnt==3)
		{
			printf("You enter the error password over 3 time!!!\n");
			break;
		}
		if(input==passwd)
		{
			printf("Your password is correct, wellcome to use system\n");
			break;
		}
		else
		{
			cnt++;
			printf("Your password is not corect, Please enter again.\n");
			printf("Your remain %d chance to input correct passowrd\n",3-cnt);
		}
	}
	return 0;
}
