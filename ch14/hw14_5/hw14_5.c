#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *num,*i;
	double sum;
	char ch;
	struct student
	{
		char name[10];
		int score;
	} *ptr;

	num=(int *) malloc(sizeof(int));
	i=(int *) malloc(sizeof(int));

	printf("Number of student:");
	scanf("%d",num);

	ptr=(struct student *) malloc((*num)*sizeof(struct student));

	for(*i=0;(*i)<(*num);(*i)++)
	{
		while((ch=getchar())!='\n' && ch!=EOF);
		printf("name for student %d: ",(*i)+1);
		fgets((ptr+(*i))->name,10,stdin);
		printf("score for student %d:",(*i)+1);
		scanf(" %d",&(ptr+(*i))->score);
		sum+=(ptr+(*i))->score;
	}
	for(*i=0;(*i)<(*num);(*i)++)
		printf("Name: %sscore=%d\n",(ptr+(*i))->name,(ptr+(*i))->score);
	printf("Average:%2.2f\n",sum/(*num));
	free(ptr);
	free(i);
	free(num);

	return 0;
}
