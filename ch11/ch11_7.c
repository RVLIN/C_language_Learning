#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct date
	{
		int month;
		int day;
	};
	struct data
	{
		char name[10];
		int math;
		struct date birthday;
	}s1;


	printf("s1 size: %ld\n",sizeof(s1));

	return 0;
}
