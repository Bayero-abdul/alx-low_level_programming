#include <stdio.h>

/**
* main - Prints fibonacci sequence whose value
* does not exceed 4,000,000
* Return: 0
*/
int main(void)
{
	int i;
	long a, b, c, sum;

	a = 1;
	b = 1;
	sum = 0;

	for (i = 0; i < 50; i++)
	{
		if (b >= 4000000)
			break;

		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			sum += c;
	}
	printf("%ld\n", sum);
	return (0);
}
