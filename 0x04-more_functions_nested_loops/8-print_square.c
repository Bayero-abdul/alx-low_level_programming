#include "main.h"

/**
* print_square - Prints a square
* @size: size of the square
*/
void print_square(int size)
{
	int i, j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		i++;
	}
	_putchar('\n');
}
