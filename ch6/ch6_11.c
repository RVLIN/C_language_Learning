#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int h;
	double pay;
	printf("Please input worker working hours\n");
	scanf("%d",&h);
	
	
	if(h>=0 && h<=60)
	{
		pay=h*75;
	}
	else if(h>=61 && h<=75)
	{
		pay=60*75+(h-60)*(75*1.25);
	}
	else if(h>=76)
	{
		pay=(60*75)+(15*75*1.25)+(h-75)*(75*1.75);
	}
	
	printf("Your payroll is %.2f\n",pay);


	return 0;
}
