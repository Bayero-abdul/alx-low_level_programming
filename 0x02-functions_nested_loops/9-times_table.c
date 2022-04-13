#include "main.h"

/**
	 * main - check the code
	  *
		 * Return: Always 0.
		  */
int main(void)
{
	    times_table();
			    return (0);
}

void times_table(void)
{
	int i, j;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			_putchar(i * j);
			j++;
		}
		i++;
	}
}
