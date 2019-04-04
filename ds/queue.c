# include "stdio.h"

typedef struct queue
{
	int data;
	struct stack *next;
} Q;


void enQ(Q **qPtr)
{
}


void deQ(Q **qPtr)
{
}


void printQ(Q *qPtr)
{
	
}

int main(void)
{
	Q *qPtr+NULL;
	
	enQ(&qPtr,2);
	enQ(&qPtr,4);
	enQ(&qPtr,6);
	enQ(&qPtr,8);
	enQ(&qPtr,10);
	
	printQ(qPtr);
	
	
	return(0);
}