#include "main.h"

/**
* print_number -  prints an integer
* @n: number
*/
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		print_number(n);
	}
	else if (n > 0)
	{
		if (n / 10 == 0)
		{
			_putchar((n % 10) + '0');
		}
		else
		{
			print_number(n / 10);
			_putchar((n % 10) + '0');
		}
	}
}
