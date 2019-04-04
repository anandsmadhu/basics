#include "stdio.h"
#include "stdlib.h"

typedef struct listnode
{
	int num;
	struct node *next;
} LISTNODE;



void addElement(LISTNODE **head, int element)
{
	LISTNODE *newNode ;
	LISTNODE *last;
	
	newNode = (LISTNODE *) malloc(sizeof(LISTNODE));
	newNode->num = element;
	newNode->next = NULL;
	
	
	if(*head == NULL) /*list is empty*/
	{
		printf("Head is NULL - creating list\n ");
		(*head) = newNode;
		return;
	}
	
	last = *head;
		
	while(last->next != NULL)
		  last = last->next;
	last->next = newNode;
	return;
	
}

void printList(LISTNODE *head)
{
	printf("\n %d", head->next); 
	/*while(head != NULL)
	{
		printf("%d ", head->num);
		head = head->next;
	}*/
}

int main(void)
{
	LISTNODE *head=NULL;
	
	
	addElement(&head, 4);
    addElement(&head, 5);	
	addElement(&head, 1);
    addElement(&head, 9);	
	
	printList(head);
	
}