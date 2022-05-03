#include "main.h"

/**
* print_number - prints an integer
* @n: number to print
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
		n *= -1;
		print_number(n);
	}
	else if (n > 0)
	{
		if ((n / 10) >= 0 && (n / 10) < 1)
		{
			_putchar((n % 10) + '0');
			return;
		}
		else
		{
			print_number(n / 10);
			_putchar((n % 10) + '0');
		}
	}
}
