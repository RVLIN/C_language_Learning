#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input_money,need_money;
	int detect1000=0,detect500=0,detect100=0,detect50=0,detect10=0,detect5=0;
	printf("Please input need money:");
	scanf("%d",&need_money);
	printf("Please input input money:");
	scanf("%d",&input_money);
	if(need_money>input_money)
	{
		printf("input money is not enough\n");
	}
	else
	{
		input_money-=need_money;
		if(input_money/1000!=0)
		{
			detect1000=(input_money/1000);
			input_money-=detect1000*1000;
		}
		if(input_money/500!=0)
		{
			detect500=(input_money/500);
			input_money-=detect500*500;
		}	
		if(input_money/100!=0)
		{
			detect100=(input_money/100);
			input_money-=detect100*100;
		}		
		if(input_money/50!=0)
		{
			detect50=(input_money/50);
			input_money-=detect50*50;
		}		
		if(input_money/10!=0)
		{
			detect10=(input_money/10);
			input_money-=detect10*10;
		}		
		if(input_money/5!=0)
		{
			detect5=(input_money/5);
			input_money-=detect5*5;
		}	
	}
	printf("1000:%d, 500:%d, 100:%d, 50:%d, 10:%d, 5:%d, 1:%d\n",detect1000,detect500,detect100,detect50,detect10,detect5,input_money);


	return 0;
}
