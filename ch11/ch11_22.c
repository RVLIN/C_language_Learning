#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[10];
	int math;
}SCORE;

void display(SCORE);

int main(void)
{
	SCORE s1={"Jenny",74};
	display(s1);

	return 0;
}
void display(SCORE st)
{
	printf("Student Name: %s\n",st.name);
	printf("Math Score  : %d\n",st.math);
}
