#include <stdio.h>

/**
* print_numbers - prints 10 times the numbers, from 0 to 14
*/
void print_numbers(void)
{
	int i, j, last_digit, first_digit;

	for (j = 0; j < 10; i++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
			{
				last_digit = i % 10;
				first_digit = i;
				while (first_digit >= 10)
				{
					first_digit /= 10;
				}
				_putchar('0' + first_digit);
				_putchar('0' + last_digit);
			}
			else
			{
				_putchar('0' + i);
			}
			i++;
		}
		putchar('\n');
	}
}
