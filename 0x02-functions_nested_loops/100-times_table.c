#include "main.h"
#include <stdio.h>

/**
* print_times_table - Prints the n times table
* @n: number
*/
void print_times_table(int n)
{
	int i, j, num, ascii_num;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		print_zero(i);

		j = 0;
		ascii_num = '0';
		for (; j < n; j++)
		{
			ascii_num += i;
			if (ascii_num <= '9')
				_putchar(ascii_num);
			else
			{
				num = ascii_num - '0';
				print_digits(num);
			}

			if (j == n - 1)
				break;
			_putchar(',');
			if ((ascii_num + i) >= 148)
			{
				print_space(1);
			}
			else if ((ascii_num + i) > '9')
			{
				print_space(2);
			}
			else if (ascii_num <= '9')
			{
				print_space(3);
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}


/**
* print_zero - prints 0 and 3 spaces if i is less than 10
* and 2 spaces if i is greater than or equals to 10
* @i: i'th loop
*/
void print_zero(int i)
{
	_putchar('0');
	_putchar(',');

	if (i < 10)
	{
		print_space(3);
	}
	else
	{
		print_space(2);
	}
}

/**
* print_space - prints n number of spaces
* @n: number of spaces
*/
void print_space(int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		_putchar(' ');
	}
}

/**
* print_digits - prints each digit of a number
* @num: number
*/
void print_digits(int num)
{
	if (num > 0)
	{
		print_digits(num / 10);
		_putchar((num % 10) + '0');
	}
}
