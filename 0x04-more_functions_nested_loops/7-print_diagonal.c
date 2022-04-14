#include "main.h"

/**
* print_diagonal - prints a diagonal line
* @n: is the number of times the character \ should be printed
*/
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}

