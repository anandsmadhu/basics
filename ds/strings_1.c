#include "stdio.h"
#include "string.h"
#include "stdlib.h"

void testfunction(char *inputString)
{
    int i=0;
    printf("testfunction \n");
    inputString[2] = 'x';
    while (inputString[i] != '\0')
    {
        printf("%c", inputString[i]);
        i++;
    }
}


int main(void)
{
    //char *string = "Test String";
    //string = "Text String";

    char *string;

    string = (char *) malloc(strlen("Test String") + 1);

    strcpy(string, "Test String");


    printf("%s\n", string);
    testfunction(string);
    printf("\n%s\n", string);
    return(0);
}