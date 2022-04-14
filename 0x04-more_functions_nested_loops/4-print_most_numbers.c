#include <stdio.h>

/**
* print_most_numbers - prints all single digit numbers of base 10
* using ascii except 2 and 4
*/
void print_most_numbers(void)
{
	int num_start, num_end;

	num_start = 48;
	num_end = 57;
	while (num_start <= num_end)
	{
		if (num_start != 50 && num_start != 52)
			_putchar(num_start);
		num_start++;
	}
	_putchar('\n');
}
