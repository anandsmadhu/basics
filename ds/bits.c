#include "stdio.h"


void printbits(int n)
{
	while(n)
	{
		printf("%d ", (n & 0x1));
		n = n>>1;
	}
}

void recprintbits(int n)
{
	if(n <= 1)
		printf("%d ", n%2);
	else 
	{
		recprintbits(n/2);
		printf("%d ", n%2);
	}
		
}

int main(void)
{
	int n = 37;
	
	recprintbits(n);
	return(0);
}