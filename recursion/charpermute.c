#include "stdio.h"
#include "string.h"

static int stackframe_count = 0;

void swap(char *x, char *y)
{

    
    char t;
    if(* x == *y)
    {
        printf("no swap needed - returning\n");
        return;
    }
    printf("SWAP : arr[left] = %c, arr[i]] = %c\n", *x, *y);
    t = *x;
    *x = *y;
    *y = t;
}

void permute(char string[], int left, int right)
{
    int i;
    if(left == right)
    {
        printf("%s\n", string);
    }
    else
    {
        for(i=left; i<=right; i++)
        {
            swap(&string[left], &string[i]);
            permute(string, left+1, right);
            swap(&string[left], &string[i]);
        }
    }
}

int main(void)
{
    char string[] = "ABC";
    int length = strlen(string);

    permute(string, 0, length - 1);
    return(0);
}