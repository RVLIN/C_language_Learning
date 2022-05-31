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
void combineList(NODE* first, NODE* second);
int listLength(NODE *first);
NODE* searchNode (NODE* first, int item);
NODE* deleteNode (NODE *,NODE *);
NODE* createNode (int *arr, int len);

int main(void)
{
	int arr1[]={12,43,56,34,98};
	int arr2[]={36,77,99};
	NODE *first,*second;
	printf("=====First List=====\n");
	first=createNode(arr1,5);
	show(first);
	printf("=====Second List=====\n");
	second=createNode(arr2,3);
	show(second);
	printf("=====Combine List=====\n");
	combineList(first,second);
	show(first);

}

void combineList(NODE* first, NODE* second)
{
	NODE *node;
	node=searchNode(first,98);
	node->next=second;
}

int listLength(NODE *first)
{
	int cnt=0;
	NODE *walk;
	walk=first;
	if(first==NULL)
	{
		printf("List is empty");
		return 0;
	}
	else
	{
		while(walk!=NULL)
		{
			cnt++;
			walk=walk->next;
		}
	}
	return cnt;
}

void freeList(NODE* first)
{
	NODE* walk;
        NODE* tmp;
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
void insertNode(NODE *ptr, int value)
{
	NODE *new = ( NODE *) malloc(sizeof(NODE));
	new->data=value;
	new->next=ptr->next;
	ptr->next=new;
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
