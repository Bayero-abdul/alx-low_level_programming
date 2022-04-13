#include "main.h"

/**
* print_last_digit - Prints the last digit of a number
* @n: is the number
*
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
	unsigned int x;

	x = n;
	_putchar((x % 10) + '0');
	return (x % 10);
}
