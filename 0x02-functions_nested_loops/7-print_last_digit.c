#include "main.h"
#include <stdio.h>

/**
* print_last_digit - Prints the last digit of a number
* @n: is the number
*
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	_putchar(n % 10 + '0');
	return (n % 10);
}
