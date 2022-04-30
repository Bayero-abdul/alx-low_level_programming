#include <stdio.h>

/**
* main - Prints the first 98 fibonacci numbers,
* starting with 1 and 2
* Return: 0
*/
int main(void)
{
	int i;
	long int a, b;

	a = 1;
	b = 1;

	for (i = 0; i < 98; i++)
	{
		if (i == 0)
			printf("1");
		else
		{
			long int c = a + b;
			printf("%ld", c);
			a = b;
			b = c;
		}

		if (i != 97)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
