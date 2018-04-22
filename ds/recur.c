#include "stdio.h"
#include "stdlib.h"



void printbits(int n)
{
    while(n!=0)
    {
        printf("%d ", n&0x1);
        n=n>>1;
    }
}

void recprintbits(int n)
{
    if(n!=1)
        recprintbits(n>>1);
    
    printf("%d ", n&0x1);
}

void revbits(int n)
{
    
    

}



int factorial (int n)
{
    int fact;
    if (n==0)
        fact=1;
    else
        fact=n*factorial(n-1);
    
    return(fact);
}


void printnum(int n)
{
    if(n!=1)
        printnum(n-1);
    printf("%d, ", n);

}

int main (void)
{
    
    //printnum(10);
    //printf("factorial of 5=%d\n" ,factorial(5));
    printbits(8);
    printf("\n");
    recprintbits(8);
    return (0);
}