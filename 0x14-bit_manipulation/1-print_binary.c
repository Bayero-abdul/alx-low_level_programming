#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: number
*/
void print_binary(unsigned long int n)
{
	int temp, remainder;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
	{
		temp = n;
		n >>= 1;
		remainder = temp - (n * 2);
		if (n)
			print_binary(n);
		_putchar('0' + remainder);
	}
}

