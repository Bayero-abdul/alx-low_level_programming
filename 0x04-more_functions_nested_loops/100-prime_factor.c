#include <stdio.h>

/**
* main - prints the largest prime factor of
* the number 612852475143
* Return: 0 if no error
*/
int main(void)
{
	unsigned long i;
	unsigned long num =  612852475143;
	unsigned long largest_prime;

	for (i = 2; i * i <= num; i++)
	{
		while (num % i == 0)
		{
			largest_prime = i;
			num /= i;
		}
	}
	printf("%ld\n", largest_prime);

	return (0);
}
