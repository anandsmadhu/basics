#include <stdio.h>

void printStars(int n)
{
    if(n<=0) return;

    printf("*");
    if(n!=1)
        printStars(n-1);
}

int main(void)
{
    int n = 5;

    printStars(n);
}