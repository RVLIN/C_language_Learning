#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=0,b=0,c=0;
	int s;
	printf("Please input 10 students score\n");
	for( int i=1;i<=10;i++)
	{
		printf("student %d score:",i);
		scanf("%d",&s);

		if(s>=76 && s<=100)
		{
			a++;
		}
		else if(s>=60 && s<=75)
		{
			b++;
		}
		else if(s>=0 && s<=59)
		{
			c++;
		}
		else
		{
			printf("error value\n");
		}
	}
	printf("A:%d B:%d C:%d\n",a,b,c);


	return 0;
}
