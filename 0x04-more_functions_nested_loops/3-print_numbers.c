#include <stdio.h>

/**
* print_numbers - prints all single digit numbers of base 10
* using ascii
*/
void print_numbers(void)
{
	int num_start, num_end;

	num_start = 48;
	num_end = 57;
	while (num_start <= num_end)
	{
		putchar(num_start);
		num_start++;
	}
	putchar('\n');
}
