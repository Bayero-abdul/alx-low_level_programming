#include "main.h"

/**
* print_triangle - prints a triangle of size 'size'
* @size: size of the triangle
*/
void print_triangle(int size)
{
	int i, j, k;

	i = 0;
	while (i < size)
	{
		j = 0;
		k = 0;
		while (j < size - 1 - i)
		{
			_putchar(' ');
			j++;
		}
		while (k < i + 1)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
