#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main(void)
{
	int i,sum;
	char ch;
	struct data
	{
		char name[10];
		int math;
	} student[MAX]={{"high",80},{"lin",50},{"chang",89},{"line",1},{"mang",70}};
	struct data *MAX_student=student;
	
	for(i=0;i<MAX;i++)
	{
		if(MAX_student->math<(student+i)->math)
			MAX_student=(student+i);
	}
	

	printf("---Output---\n");
	printf("Hightest Studet Name is %s and score is %d\n",MAX_student->name,MAX_student->math);
	printf("HAVE NOT PASS STUDENT LIST:\n");
	for(i=0;i<MAX;i++)
	{	
		if((student+i)->math<60)
			printf("%s Math score is %d\n",(student+i)->name,(student+i)->math);
		sum+=(student+i)->math;
	}
	printf("Math average score is %d\n",sum/MAX);


	return 0;
}
