#include "stdio.h"


void recprintbits(int n)
{
	if (n != 1)
		recprintbits(n >> 1);

	printf("%d ", n & 0x1);
}

void printbits(int n)
{
	while (n != 0)
	{
		printf("%d ", n & 0x1);
		n = n >> 1;
	}
}

int main(void)
{
	int n = 37;
	recprintbits(n);
	return(0);
}