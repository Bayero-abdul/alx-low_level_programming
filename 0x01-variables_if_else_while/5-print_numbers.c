#include <stdio.h>

/**
	* main - prints all single digit numbers of base 10
	* using ascii
	*
	* Return: 0 if there is no error
	*/
int main(void)
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
		return (0);
}
