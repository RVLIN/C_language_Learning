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
NODE* deleteNode (NODE *,NODE *);
NODE* createNode (int *arr, int len);

int main(void)
{
	int arr[]={12,38,64,37};

	NODE *first;
	first=createNode(arr,4);

	show(first);

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
	while(node!=NULL)
	{
		if(node->data==item)
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
