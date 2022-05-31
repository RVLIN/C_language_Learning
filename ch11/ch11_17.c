#include <stdio.h>
#include <stdlib.h>

#define MAX 5

struct data
{
	char name[10];
	int math;
};
struct data best(struct data student[]);
void failed(struct data student[]);
double average(struct data student[]);
void sort(struct data student[]);
void display(struct data student[]);
int main(void)
{
	struct data student[MAX]={{"high",80},{"lin",50},{"chang",89},{"line",1},{"mang",70}};
	struct data MAX_student={0};
	
	printf("---Output---\n");
	printf("Hightest Studet Name is %s and score is %d\n",best(student).name,best(student).math);
	printf("HAVE NOT PASS STUDENT LIST:\n");
	failed(student);
	printf("Math average score is %.2f\n",average(student));
	sort(student);

	return 0;
}
void sort(struct data student[])
{
	struct data tmp;
	for(int i=0;i<MAX;i++)
	{
		for(int j=0;j<MAX;j++)
		{
			if(student[i].math>student[j].math)
			{
				tmp=student[i];
				student[i]=student[j];
				student[j]=tmp;				
			}
		}
	}
	display(student);
}
void display(struct data student[])
{
	for(int i=0;i<MAX;i++)
	{
		printf("%s Math score is %d\n",student[i].name,student[i].math);
	}
}
double average(struct data student[])
{
	double sum=0;
	for(int i=0;i<MAX;i++)
		sum+=student[i].math;

	return sum/MAX;
}
void failed(struct data student[])
{
	for(int i=0;i<MAX;i++)
	{	
		if(student[i].math<60)
			printf("%s Math score is %d\n",student[i].name,student[i].math);
	}
}
struct data best(struct data student[])
{
	struct data MAX_student={0};
	
	for(int i=0;i<MAX;i++)
	{
		if(MAX_student.math<student[i].math)
			MAX_student=student[i];
	}
	return MAX_student;
}
