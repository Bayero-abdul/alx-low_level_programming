#include "main.h"

/**
* jack_bauer -  prints every minute of the day, starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int i, j, k, l;

	i = 48;
	while (i <= 50)
	{
		j = 48;
		while (j <= 57)
		{
			if (i == 50 && j == 52)
				break;
			k = 48;
			while (k <= 53)
			{
				l = 48;
				while (l <= 57)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
