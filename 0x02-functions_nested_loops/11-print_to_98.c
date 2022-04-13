#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_to_98 - Prints all natural numbers from n to 98
* @n: number
*/
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				break;
			printf(", ");
		}
	}
	else
	{
		if (n >= 0)
		{
			for (i = n; i <= 98; i++)
			{
				printf("%d", i);
				if (i == 98)
					break;
				printf(", ");
			}
		}
		else
		{
			for (i = n; i <= (98 + abs(n)); i++)
			{
				printf("%d", i);
				if (i == 98)
					break;
				printf(", ");
			}
		}
	}
	printf("\n");
}
