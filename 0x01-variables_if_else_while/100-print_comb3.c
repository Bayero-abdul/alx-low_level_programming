#include <stdio.h>

/**
	* main - prints all possible combinations of single-digit numbers
	* using ascii
	*
	* Return: 0 if there is no error
	*/
int main(void)
{
	  int i, j, num_end;

		i = 48;
		num_end = 57;
		while (i <= num_end)
		{
			j = 48;
			while (j <= num_end)
			{
				if (i < j)
				{
					putchar(i);
					putchar(j);
					if (i == 56 && j == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			i++;
		}
		putchar('\n');
		return (0);
}
