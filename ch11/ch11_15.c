#include <stdio.h>
#include <stdlib.h>

struct data
{
	char name[10];
	int math;
};
void add5(struct data *);

int main(void)
{
	struct data s1={"LIN",50};

	printf("before add5 %s math score is %d\n",s1.name,s1.math);
	add5(&s1);
	printf("after add5 %s math score is %d\n",s1.name,s1.math);

	return 0;
}

void add5(struct data *st)
{
	st->math+=5;
}
	
