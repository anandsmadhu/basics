#ifndef STACK_H_   /* Include guard */
#define STACK_H_


typedef struct stack
{
	int data;
	struct stack *next;
} STACK;


int push(STACK *topOfStack, int data);
int pop(STACK *topOfStack);

int push(STACK **topOfStack, int data);
{

}

int pop(STACK **topOfStack);
{

}





#endif // STACK_H_