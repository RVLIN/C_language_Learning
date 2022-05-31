#include <stdio.h>
#include <stdlib.h>

struct data
{
	int hour;
	int minutes;
	double second;
};

void display(struct data);

int main(void)
{
	struct data start={12,32,25.49};
	struct data end={15,12,17.53};
	struct data elapse;
	double seconds=0;
	printf("Start : ");
	display(start);
	printf("End   : ");
	display(end);
	seconds=((end.hour*60*60)+(end.minutes*60)+end.second)-((start.hour*60*60)+(start.minutes*60)+start.second);
	elapse.hour=seconds/3600;
	elapse.minutes=(seconds-(elapse.hour*3600))/60;
	elapse.second=seconds-(elapse.hour*3600)-(elapse.minutes*60);
	printf("Elapse: ");
	display(elapse);
	
		
	return 0;
}

void display(struct data time)
{
	printf("%02d:%02d:%02.2f\n",time.hour,time.minutes,time.second);		
}
