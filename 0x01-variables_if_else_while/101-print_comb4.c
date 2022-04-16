#include <stdio.h>

/**
* main - prints all possible combinations of three digits using ascii
* Return: 0 if there is no error
*/
int main(void)
{
	int i, j, k, num_end;

	i = 48;
	num_end = 57;
	while (i <= num_end)
	{
		j = 48;
		while (j <= num_end)
		{
			k = 48;
			while (k <= num_end)
			{
				if (i < j && j < k && i < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
