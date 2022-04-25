#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=0,b=0,c=0;
	int s;
	printf("Please input students score\n");
	scanf("%d",&s);

	if(s>=80 && s<=100)
	{
		printf("Student score is A\n");
	}
	else if(s>=60 && s<=79)
	{
		printf("Student score is B\n");
	}
	else if(s>=0 && s<=59)
	{
		printf("Student score is C\n");
	}
	else
	{
		printf("error value\n");
	}


	return 0;
}
