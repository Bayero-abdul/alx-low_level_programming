#include <stdio.h>

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
	int i, j, last_digit, first_digit;

	for (j = 0; j < 10; i++)
	{
		i = 0;
		while (i <= 14)
		{
			last_digit = i % 10;
			first_digit = i;

			if (i > 9)
			{
				while (first_digit >= 10)
				{
					first_digit /= 10;
				}
				_putchar('0' + first_digit);
			}
			_putchar('0' + last_digit);
			i++;
		}
		putchar('\n');
	}
}
