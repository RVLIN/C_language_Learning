#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	double *ptr,sum=0;
	int i;

	ptr=(double *) malloc(3*sizeof(double));


	for(i=0;i<3;i++)
	{
		printf("*ptr+%d=",i);
		scanf("%lf",ptr+i);
		sum+=*(ptr+i);
	}
	for(i=0;i<3;i++)
		printf("*ptr+%d=%2.2f\n",i,*(ptr+i));
	printf("Sum:%2.2f, Average:%2.2f\n",sum,sum/3);

	free(ptr);

	return 0;
}
