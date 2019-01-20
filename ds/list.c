#include "stdio.h"
#include "stdlib.h"

typedef struct node
{
	int num;
	struct node * next;
} LISTNODE ;



void addElement(LISTNODE **head, int element)
{

	    LISTNODE *last;
        LISTNODE *newNode;
        
        newNode = (LISTNODE *) malloc (sizeof(LISTNODE));
        newNode->num = element;
        newNode->next = NULL;

        
        if(*head == NULL)
        {
		    (*head) = newNode;
		    return;
 	    }
 	    last = *head;
        while (last->next != NULL)
	    	    last = last->next;
	    last->next = newNode;
	    return;

}

void printList(LISTNODE *head)
{
	printf("\n");
    while(head !=NULL)
    {
    	printf("%d ", head->num);
    	head = head->next;
    }
    printf ("\n");

}

void deleteNode (LISTNODE **head, int element)
{
    LISTNODE *temp;
    LISTNODE *nextNode;
    temp = *head;
    while(temp !=NULL)
    {
        if (temp->num == element)
        {
        	printf("Found the element to delete");
        	
        	nextNode = temp->next;
        	temp-> num = nextNode->num;
        	temp->next = nextNode->next;
        	free(nextNode);
        	
        }
        else
        	temp = temp->next;
    }
}



LISTNODE *findMiddle (LISTNODE *head)
{
	LISTNODE *fast = NULL;
	LISTNODE *mid = NULL;
	mid = head;
	fast = head;
	
	while((fast!=NULL) && (fast->next !=NULL))
	{
		mid = mid->next;
		fast = (fast->next)->next;
	}
	
	return(mid);
}


void reverseList(LISTNODE **head)
{
	LISTNODE *current = NULL;
	LISTNODE *next = NULL;
	LISTNODE *prev = NULL;
	
	current = *head;
	
	while(current!=NULL)
	{
		next = current->next;
		current->next = prev;
		prev=current;
		current = next;
	}
	*head = prev;
	
}




int main(void)
{
	LISTNODE *head=NULL;
	LISTNODE *middle = NULL;
	
	addElement(&head, 4);
	addElement(&head, 5);
	addElement(&head, 1);
	addElement(&head, 9);
	printList(head);
	
	
	printf("delete element 5");
	deleteNode(&head, 5);
	printList(head);
	addElement(&head, 2);
	addElement(&head, 3);
	addElement(&head, 6);
	addElement(&head, 7);
	addElement(&head, 8);
	addElement(&head, 9);
	
	
	printList(head);
	middle = findMiddle(head);
	printf("Middle of the list is %d ", middle->num);
	
	reverseList(&head);
	printList(head);
	
	
	
	
}
