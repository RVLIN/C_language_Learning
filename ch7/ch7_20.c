#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	int count=0,sum=0,count_star=1;
	do 
	{
		printf("Please 1~50 number:");
		scanf("%d",&number);
		if(number<=50 && number >=1)
		{
			do
			{
				printf("*");
				count_star++;
			}while (count_star<=number);
			count_star=1;
			count++;
			printf("\n");
		}
	} while (count <= 2 );


	return 0;
}
