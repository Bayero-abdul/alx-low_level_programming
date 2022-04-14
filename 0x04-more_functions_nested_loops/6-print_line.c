#include "main.h"

/**
* print_line - Prints a lines n long
* @n: number of time '_' is going to be printed
*/
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
