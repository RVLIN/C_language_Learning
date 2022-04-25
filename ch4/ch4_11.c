#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int StudentID,Age;
	printf("Please entry Student ID number:");
	scanf("%d",&StudentID);
	fflush(stdin);
	printf("Please entry Student age:");
	scanf("%d",&Age);
	printf("Student Age is: %d, Student ID is:%d \n",Age, StudentID);
	return 0;
}
