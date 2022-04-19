#include <stdio.h>

/**
* main - Prints fibonacci sequence whose value
* does not exceed 4,000,000
* Return: 0
*/
int main(void)
{
	int i;
	long a, b, c;

	a = 1;
	b = 1;

	for (i = 0; i < 50; i++)
	{
		if (b >= 4000000)
			break;
		if (b % 2 == 0)
		{
			printf("%ld", b);
			if (a + b >= 4000000)
				printf("\n");
			else
				printf(", ");
		}

		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}
