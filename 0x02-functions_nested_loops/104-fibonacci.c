#include <stdio.h>

/**
* main - Prints the first 98 fibonacci numbers,
* starting with 1 and 2
* Return: 0
*/
int main(void)
{
	int i;
	unsigned long long a, b, c;
 
	a = 1;
	b = 1;

	for (i = 0; i < 98; i++)
	{
		printf("%llu", b);
		c = a + b;
		a = b;
		b = c;

		if (i != 97)
			printf(", ");
		else
			printf("\n");

	}
	return (0);
}
