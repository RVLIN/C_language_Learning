#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct status
	{
		unsigned sex:1;
		unsigned marriage:1;
		unsigned age:7;
		unsigned height:8;
		unsigned weight:8;
	};
	struct status maruco={0,0,9,162,50};

	if(maruco.sex==0)
		printf("Sex: Female, ");
	else
		printf("Sex: Male, ");

	if(maruco.marriage==0)
		printf("not marriage, ");
	else
		printf("marraiged, ");

	printf("Age: %d, ",maruco.age);
	printf("Height: %d cm, ",maruco.height);
	printf("Weight: %d kg.\n",maruco.weight);

	printf("sizeof(tom)=%ld\n",sizeof(maruco));

	return 0;
}

