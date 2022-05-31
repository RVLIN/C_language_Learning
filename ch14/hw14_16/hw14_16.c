#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* NODEp;

void show(NODE *);
void freeList(NODE* first);

int main(void)
{
	int i,val,num;
	NODEp first;
	NODEp walk;
	NODEp previous;
	printf("Number of nodes: ");
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		walk=(NODE *)malloc(sizeof(NODE));
		printf("Data for node %d: ",i+1);
		scanf("%d", &(walk->data));
		if(i==0)
			first=walk;
		else
			previous->next=walk;
		walk->next=NULL;
		previous=walk;
	}
	walk=first;
	show(walk);

	printf("After free list\n");
	freeList(first);
	show(first);
}

void freeList(NODEp first)
{
	NODEp walk;
        NODEp tmp;
	walk=first;
	while(walk!=NULL)
	{
		tmp=walk;
		walk=walk->next;
		free(tmp);
	}
}

void show(NODEp ptr)
{
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("address:%p, ",ptr);
			printf("data=%d, ",ptr->data);
			printf("next=%p. \n",ptr->next);
	
			ptr=ptr->next;
		}
	}
}
