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
		char name[20];
		int math;
		struct date birthday;
	}s1;


	printf("Student name:");
	fgets(s1.name,20,stdin);
	fflush(stdin);
	printf("Birthday(example:05/23):");
	scanf("%d/%d",&s1.birthday.month,&s1.birthday.day);
	printf("Math score: ");
	scanf("%d",&s1.math);

	printf("\n---OUTPUT---\n");
	printf("Student name: %s",s1.name);
	printf("Birthday: %d/%d\n",s1.birthday.month,s1.birthday.day);
	printf("Math score: %d\n",s1.math);

	return 0;
}
