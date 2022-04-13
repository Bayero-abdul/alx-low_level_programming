#include "main.h"

/**
* times_table - Prints the 9 times table
*/
void times_table(void)
{
	int i, j, n, ascii_num, first_digit, last_digit;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		j = 0;
		ascii_num = 48;
		for (; j < 9; j++)
		{
			ascii_num += i;
			if (ascii_num > 57)
			{
				n = ascii_num - 48;
				first_digit = n;
				while (first_digit >= 10)
				{
					first_digit /= 10;
				}
				last_digit = n % 10;
				_putchar('0' + first_digit);
				_putchar('0' + last_digit);
			}
			else
				_putchar(ascii_num);
			if (j == 8)
				break;
			_putchar(',');
			if ((ascii_num + i) > 57)
				_putchar(' ');
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
