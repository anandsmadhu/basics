#include "stdio.h"


struct node
{
	int num;
	struct node * next;
}



void addElement(struct node **head, int element)
{
	struct node *last;
	if(*node ==NULL) /*list is empty*/
	{
		*node = (struct node *)malloc(sizeof(struct node))
		(*node) -> num = element;
		(*node) -> next = NULL;
	}
	else
	{
		// get to the element which is at the end 
		while (((*node)->next) !=NULL)
			(*node)++;
		last = node;
	}
}

void printList(struct node *head)
{
}

int main(void)
{
	struct node *head;
	
	addElement(&head, 5);
	addElement(&head, 10);
	printList(head);
	
}