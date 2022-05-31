#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	double *ptr,*current,sum=0;
	int i;



	for(i=0;i<3;i++)
	{
		current=(double *) malloc(sizeof(double));
		printf("*ptr+%d=",i);
		scanf("%lf",current+i);
		sum+=*(current+i);
		free(current);
	}


	printf("Sum:%2.2f, Average:%2.2f\n",sum,sum/3);

	return 0;
}
