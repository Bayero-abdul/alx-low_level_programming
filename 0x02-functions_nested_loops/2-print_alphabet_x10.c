#include "main.h"

/**
* print_alphabet_x10 - Prints 'a-z' 10 times
*/
void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
