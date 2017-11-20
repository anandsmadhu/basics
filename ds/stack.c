# include "stdio.h"
# include "stdlib.h"

typedef struct stack
{
	int data;
	struct stack *next;
} STACKITEM;

void stackPush(STACKITEM **stackPtr, int data)
{
	STACKITEM *temp = NULL;
	if(*stackPtr ==NULL)
	{
		printf("stack is empty\n");
		*stackPtr=(STACKITEM *) malloc(sizeof(STACKITEM));
		(*stackPtr)-> data = data;
		(*stackPtr)-> next = NULL;
	}
	else
	{
		printf("stack is not empty\n");
		temp = (STACKITEM *) malloc(sizeof(STACKITEM));
		temp->data = data;
		temp->next = *stackPtr;
		*stackPtr = temp;
	}
}

void stackPop(STACKITEM **stackPtr)
{
	if(*stackPtr ==NULL)
	{
		printf("Stack UNDERFLOW\n");
	}
	else
	{

	}
		
}

void printStack(STACKITEM *stackPtr)
{
	if(stackPtr!=NULL)
	{
		while(stackPtr != NULL)
		{
			printf("data = %d\n", stackPtr->data);
			stackPtr = stackPtr->next;
		}

	}
	else
	{
		printf("stack is empty\n");
	}
}




int main(void)
{
	STACKITEM *stackPtr=NULL;
	
	stackPush(&stackPtr,2);
	stackPush(&stackPtr,4);
	stackPush(&stackPtr,6);
	stackPush(&stackPtr,8);
	stackPush(&stackPtr,10);
	stackPush(&stackPtr,12);
	stackPush(&stackPtr,14);
	printStack(stackPtr);
	return(0);
}