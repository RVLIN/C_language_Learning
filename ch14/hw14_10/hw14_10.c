#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;

void show(NODE *);
void insertNode(NODE *, int, int);
NODE* searchNode (NODE* first, int item);

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
	show(ptr);
	insertNode(ptr,2,92);
	printf("After\n");
	show(ptr);

}

NODE* searchNode(NODE* first, int item)
{
	NODE *node=first;
	while(node!=NULL)
	{
		if(node->data==item)
			return node;
		else
			node=node->next;
	}
	return NULL;
}


void insertNode(NODE *ptr, int pos, int value)
{
	NODE *new = ( NODE *) malloc(sizeof(NODE));
	new->data=value;
	NODE *tmp=searchNode(ptr,38);
	new->next=tmp->next;
	tmp->next=new;
}
void show(NODE *ptr)
{
	while(ptr!=NULL)
	{
		printf("address:%p, ",ptr);
		printf("data=%d, ",ptr->data);
		printf("next=%p. \n",ptr->next);

		ptr=ptr->next;
	}
}
