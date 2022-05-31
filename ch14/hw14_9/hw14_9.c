#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;

int main(void)
{
	NODE a,b,c,d;
	NODE *ptr=&a;

	a.data=12;
	a.next=&b;
	b.data=38;
	b.next=&c;
	c.data=64;
	c.next=&d;
	d.data=37;
	d.next=NULL;

	while(ptr!=NULL)
	{
		printf("address:%p, ",ptr);
		printf("data=%d, ",ptr->data);
		printf("next=%p. \n",ptr->next);
		ptr=ptr->next;
	}
	return 0;
}
