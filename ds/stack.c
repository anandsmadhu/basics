# include "stdio.h"
# include "stdlib.h"
# include "limits.h"

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

int stackPop(STACKITEM **stackPtr)
{
	STACKITEM *temp=NULL;
	int stackdata;
	if(*stackPtr ==NULL)
	{
		printf("Stack UNDERFLOW\n");
		return(INT_MIN);
	}
	else
	{
		printf("Stack not empty\n");
		temp = *stackPtr;
		*stackPtr=(*stackPtr)->next;
		if(*stackPtr ==NULL)
		{
			printf("Last element on stack has been popped\n");
		}
		
		stackdata = temp->data;
		free(temp);
		return(stackdata);
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

	stackPop(&stackPtr);
	printStack(stackPtr);

	printf("Data from tops of stack = %d\n" ,stackPop(&stackPtr));
	printf("Data from tops of stack = %d\n" ,stackPop(&stackPtr));
	printf("Data from tops of stack = %d\n" ,stackPop(&stackPtr));
	printf("Data from tops of stack = %d\n" ,stackPop(&stackPtr));
	printf("Data from tops of stack = %d\n" ,stackPop(&stackPtr));
	printf("Data from tops of stack = %d\n" ,stackPop(&stackPtr));
	printf("Data from tops of stack = %d\n" ,stackPop(&stackPtr));
	printf("Data from tops of stack = %d\n" ,stackPop(&stackPtr));
	printf("Data from tops of stack = %d\n" ,stackPop(&stackPtr));
	printf("Data from tops of stack = %d\n" ,stackPop(&stackPtr));
	
	return(0);
}


