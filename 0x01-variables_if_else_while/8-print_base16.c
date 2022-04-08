#include <stdio.h>

/**
* main - prints numbers of base 16 in lowercase
*
* Return: 0 if it runs successfully
*/
int main(void)
{
		int num_start, num_end, lower_start, lower_end;

		num_start = 48;
		num_end = 57;
		lower_start = 97;
		lower_end = 102;
		while (num_start <= num_end)
		{
			putchar(num_start);
			num_start++;
		}
		while (lower_start <= lower_end)
		{
			putchar(lower_start);
			lower_start++;
		}
		putchar('\n');
		return (0);
}
