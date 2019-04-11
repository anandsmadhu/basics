#include <stdio.h>

int power(int base, int exp)
{

    if(exp == 0) /*base case*/
    {
        return 1;
    }
    else
    {
        //recursive call
        return(base * power(base, exp-1));
    }
}

int main(void)
{
    int base=5;
    int exp = 4;

    int result;

    result = power(base,exp);
    printf("result = %d\n", result);
    return(0);
}