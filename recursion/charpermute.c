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
    

    printf("PERMUTE ENTERING ARGUMENTS stackframe_count = %d, string = %s, left = %d, right = %d\n", stackframe_count, string, left, right);
    stackframe_count = stackframe_count + 1;
    getchar();

    if(left == right)
    {
        printf("%s\n", string);
    }
    else
    {
        for(i=left; i<=right; i++)
        {
            printf("LOOP ARGUMENTS i = %d, left = %d, right = %d\n", i, left, right);
            getchar();
            swap(&string[left], &string[i]);
            printf("AFTER FIRST CALL TO SWAP string = %s\n", string);
            getchar();
            permute(string, left+1, right);
            swap(&string[left], &string[i]);
            printf("AFTER SECOND CALL TO SWAP string = %s\n", string);
            getchar();
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