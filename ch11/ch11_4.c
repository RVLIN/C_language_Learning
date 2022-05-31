#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct data
	{
		int hour;
		int minutes;
		double second;
	};
	struct data start={12,32,25.49};
	struct data end={15,12,17.53};
	struct data elapse;
	double seconds=0;
	printf("Start : %02d:%02d:%02.2f\n",start.hour,start.minutes,start.second);
	printf("End   : %02d:%02d:%02.2f\n",end.hour,end.minutes,end.second);
	seconds=((end.hour*60*60)+(end.minutes*60)+end.second)-((start.hour*60*60)+(start.minutes*60)+start.second);
	elapse.hour=seconds/3600;
	elapse.minutes=(seconds-(elapse.hour*3600))/60;
	elapse.second=seconds-(elapse.hour*3600)-(elapse.minutes*60);
	printf("Elapse: %02d:%02d:%02.2f\n",elapse.hour,elapse.minutes,elapse.second);
	
		
	return 0;
}
