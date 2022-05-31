#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        struct time
        {
                int hour;
                int minutes;
                double second;
        };

	struct data
	{
		int year;
		int month;
		int day;
		struct time time_day;
	}now={2022,5,7,{22,32,41}};

	printf("Now is %02d/%02d/%04d  %02d:%02d:%02.2f \n",now.month,now.day,now.year,now.time_day.hour,now.time_day.minutes,now.time_day.second);
	printf("now size is %ld\n",sizeof(now));	
	return 0;
}

