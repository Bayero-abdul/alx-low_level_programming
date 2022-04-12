#include "main.h"

/**
* print_sign - Prints the sign of a number
* @n: the sign of the number n is going to be printed
*
* Return: 1 & prints + if n is greater than 0,
*	0 & prints 0 if n is zero and
* -1 and prints - if n is less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
