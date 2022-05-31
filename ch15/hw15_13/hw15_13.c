#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct status
	{
		unsigned sex:1;
		unsigned marriage:1;
		unsigned age:7;
	};
	struct status tom;
	int input;
	printf("Input sex 1-Male 0-female:");
	scanf("%d",&input);
	tom.sex=input;
	printf("Input marriage 1-Yes 0-No :");
	scanf("%d",&input);
	tom.marriage=input;
	printf("Input tom age:");
	scanf("%d",&input);
	tom.age=input;

	if(tom.sex==0)
		printf("Sex: Female, ");
	else
		printf("Sex: Male, ");

	if(tom.marriage==0)
		printf("not marriage, ");
	else
		printf("marraiged, ");

	printf("Age: %d.\n",tom.age);

	printf("sizeof(tom)=%ld\n",sizeof(tom));

	return 0;
}

