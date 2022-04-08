#include <stdio.h>

/**
* main - prints all possible combinations of single-digit numbers
* using ascii
*
* Return: 0 if there is no error
*/
int main(void)
{
	int num_start, num_end, comma, space;

	comma = 44;
	space = 32;
	num_start = 48;
	num_end = 57;
	while (num_start < num_end)
	{
		putchar(num_start);
		putchar(comma);
		putchar(space);
		num_start++;
	}
	while (num_start <= num_end)
	{
		putchar(num_start);
		num_start++;
	}
	return (0);
}
