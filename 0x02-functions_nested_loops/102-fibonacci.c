#include <stdio.h>

/**
* main - Prints the first 50 fibonacci numbers
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
		printf("%ld", b);
		c = a + b;
		a = b;
		b = c;

		if (i != 50)
			printf(", ");
		else
			printf("\n");

	}
	return (0);
}
