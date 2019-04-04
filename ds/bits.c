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


int ispowerOfTwo(int n)
{
	if (n == 0)
		return (0);

	if (!(n & (n - 1)) && (n > 0))
		return (1);
	else
		return (0);
}

int isPowerOfFour(int num)
{
	if ( num == 0 ) return 0;
	if ( num & (num - 1) ) return 0;
	return num & 0x55555555;
}

int main(void)
{
	int n = 37;
	recprintbits(n);
	if(isPowerOfFour(1))
		printf("\nPower of 4");
	else
		printf("\nNot a power of 4");
	//return (0);

	if (ispowerOfTwo(-8))
		printf("Is power of 2");
	else
		printf("Not a power of 2\n");

}