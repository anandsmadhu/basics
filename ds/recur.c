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

void revnumber(int number)
{
    int reversedNumber=0;
    int rem=0;
    while(number!=0)
    {
        rem=number%10;
        reversedNumber=(reversedNumber*10) + (number%10);
        number = number / 10;
        printf("%d\n", reversedNumber);
    }
    //printf("reversed number = %d\n", revnumber);
}

int recreverseNumber(int number)
{
    int reversedNumber = 0;
    if (!number)
        return (reversedNumber);
    recreverseNumber(number/10);

    reversedNumber = (reversedNumber * 10) + (number % 10);
}

void recprintbits(int n)
{
    if(n!=1)
        recprintbits(n>>1);
    
    printf("%d ", n&0x1);
}

int revbits(int n)
{
    int revnum;
    if (n != 1)
        revbits(n >> 1);
    //printf("%d ", n & 0x1);
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

int TRfactorial(int number, int retval)
{
    if(number==0)
        return(retval);
    TRfactorial(number-1, number*retval);

}


void printnum(int n)
{
    if(n!=1)
        printnum(n-1);
    printf("%d, ", n);

}

int main (void)
{
    recprintbits(5);
    return (0);
}