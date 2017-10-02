#include "stdio.h"
#include "pthread.h"
#include "semaphore.h"


void reverseString(char **ptrToString)
{
	printf("\nreverse string\n");
	char *start, *end;
	int ctr;
	int stringLen=0;
	start = *ptrToString;
	char temp;
	
	while(**ptrToString != '\0')
		(*ptrToString)++;
	
	end = (*ptrToString)-1;
	*ptrToString = start;
	stringLen = (end -start)/2;
	
	for(ctr=0;ctr<stringLen;ctr++)
	{
		temp = **ptrToString;
		**ptrToString = *end;
		*end = temp;
		(*ptrToString)++;
		end--;
	}
	

}


void stringToInt(char *string)
{
	printf("stringToInt - input string = %s\n", string);
}


int main(void)
{

	char s[] = "ABC DEF POR XYZ";
	char stringInt[] = "-1324";
	char *cptr;
	
	printf("%s\n", s);
	printf("size of s = %d\n", sizeof(s));
	
	printf("size of char pointer = %d\n", sizeof(cptr));
	cptr = s;
	
	reverseString(&cptr);
	printf("%s\n", s);
	
	stringToInt(stringInt);
	
	
	
	
}