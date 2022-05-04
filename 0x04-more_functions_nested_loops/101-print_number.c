#include "main.h"
#include <stdio.h>

/**
* print_number - prints an integer
* @n: number to print
*/
void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		x = -n;
		print_number(x);
	}
	else if (n > 0)
	{
		if ((n / 10) >= 0 && (n / 10) < 1)
		{
			_putchar((x % 10) + '0');
			return;
		}
		else
		{
			print_number(x / 10);
			_putchar((x % 10) + '0');
		}
	}
}
