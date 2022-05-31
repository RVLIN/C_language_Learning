#include <stdio.h>
#include <stdlib.h>

int find(int);

int main(void)
{
	int number;
	printf("Please input a number:");	
	scanf("%d",&number);
	printf("%d int is %d\n",number,find(number));
	return 0;
}

int find(int f)
{
	int cnt=0;
	int robbit_number=0;
	while(cnt<f)
	{
		robbit_number++;
		if((robbit_number%3==1) && (robbit_number%5==3) && (robbit_number%7==2))cnt++;
	}
	return robbit_number;
}

