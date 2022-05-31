#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input;
	int cnt=0;
	int passwd=6128;
	for(cnt=0; cnt<=3;cnt++)
	{
		printf("Please enter your password:");
		scanf("%d",&input);
			
		if(input==passwd)
		{
			printf("Your password is correct, wellcome to use system\n");
			break;
		}
		else if(cnt<3)
		{
			printf("Your password is not corect, Please enter again.\n");
			printf("Your remain %d chance to input correct passowrd\n",2-cnt);
		}
	}
	if(cnt==4 && input != passwd)printf("You enter the error password over 3 time!!!\n");
	return 0;
}
