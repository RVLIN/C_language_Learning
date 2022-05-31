#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;

void show(NODE *);
void insertNode(NODE *, int);
void freeList(NODE* first);
NODE* searchNode (NODE* first, int item);
NODE* deleteNode (NODE *,NODE *);
NODE* createNode (int *arr, int len);

int main(void)
{
	int i,val,num;
	NODE *first, *walk, *previous;
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

void freeList(NODE* first)
{
	NODE *walk, *tmp;
	walk=first;
	while(walk!=NULL)
	{
		tmp=walk;
		walk=walk->next;
		free(tmp);
	}
}


NODE* createNode(int *arr, int len)
{
	int i;
	NODE *first,*previous,*walk;
	for(i=0;i<len;i++)
	{
		walk=(NODE *)malloc(sizeof(NODE));
		walk->data=arr[i];
		if(i==0)
			first=walk;
		else
			previous->next=walk;
		walk->next=NULL;
		previous=walk;
	}
	return first;
}



NODE* searchNode(NODE* first, int item)
{
	NODE *node=first;
	int node_num=0;
	while(node!=NULL)
	{
		node_num++;
		if(node_num==item)
			return node;
		else
			node=node->next;
	}
	return NULL;
}

NODE* deleteNode(NODE *first, NODE *node)
{
	NODE *ptr=first;
	if(first==NULL)
	{
		printf("Nothing to delete\n");
		return NULL;
	}
	if(node==first)
		first=first->next;
	else
	{
		while(ptr->next!=node)
			ptr=ptr->next;
		ptr->next=node->next;
	}
	return first;

}
void insertNode(NODE *ptr, int value)
{
	NODE *new = ( NODE *) malloc(sizeof(NODE));
	new->data=value;
	new->next=ptr->next;
	ptr->next=new;
}
void show(NODE *ptr)
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
