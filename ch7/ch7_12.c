#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int count;
	int s1,s10,s100;
	printf("Armstrong number list:\n");
	for(count=100;count<=999;count++)
	{
		s100=count/100;
		s10=(count%100)/10;
		s1=count%10;
		if((pow(s100,3)+pow(s10,3)+pow(s1,3))==count)printf("%d is a Armstrong number \n",count);
	}

	return 0;
}
