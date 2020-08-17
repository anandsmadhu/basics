#include "stdio.h"

int findElementThatAppearsOnce(int array[], int arrayLength)
{
    int element = 0;
    int index=2;

    if (arrayLength == 0)
        return(-1);

    if (arrayLength == 1)
        return (array[0]);
    
    if (arrayLength == 2)
        return(-1);

    element = array[0] ^ array[1];

    while (index < arrayLength)
    {
        element = element ^ array[index];
        index++;

    }
    return(element);

    
}


int haveOppositeSigns(int x, int y)
{
    return((x^y) < 0);

}

int resetRightmostBit(int n )
{
    return(n & (n-1));
}

int isAPowerOfTwo(int n)
{
    if (n == 1) return (n);
    return((n & (n-1)) == 0);
}

int main(void)
{
    /*variables for findElementThatAppearsOnce*/
    int array[] = {54,54,67,98,98,23,23};
    int arrayLength;
    arrayLength= sizeof(array) / sizeof(int);
    /*variables for findElementThatAppearsOnce*/

    /*variables for haveOppositeSigns*/
    int x = 10;
    int y = 55;
    /*variables for haveOppositeSigns*/

    printf ("Element that occurs once is %d\n" ,findElementThatAppearsOnce(array,arrayLength));

    if (haveOppositeSigns(x,y))
        printf("Numbers have opposite signs\n");
    else
        printf("Numbers have same sign\n");

    if (isAPowerOfTwo(17))
        printf("Power of Two");
    else
        printf("Not a Power of Two");

    
}

       
