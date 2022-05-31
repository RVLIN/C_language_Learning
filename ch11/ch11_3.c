#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct data
	{
		int year;
		int month;
		int day;
	};
	struct data hoilday={2004,4,26};
	struct data festival;
	printf("Input festival year:");
	scanf("%d",&festival.year);
	printf("Input festival month:");
	scanf("%d",&festival.month);
	printf("Input festival day:");
	scanf("%d",&festival.day);
	printf("Hoilday: %04d/%02d/%02d\n",hoilday.year,hoilday.month,hoilday.day);
	printf("Festival: %04d/%02d/%02d\n",festival.year,festival.month,festival.day);
	printf("Struct data size is %ld\n",sizeof(hoilday));		
	return 0;
}
