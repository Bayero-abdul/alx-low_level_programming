#include <stdio.h>

int is_prime(unsigned long n);

/**
* main - prints the largest prime factor of
* the number 612852475143
* Return: 0 if no error
*/
int main(void)
{
	unsigned long i = 2;
	unsigned long num =  612852475143;
	unsigned long largest_prime;

	while (i <= num)
	{
		if (num % i == 0 && is_prime(i))
		{
			num /= i;
			largest_prime = i;
		}
		else
		{
			i++;
		}
	}
	printf("%ld\n", largest_prime);

	return (0);
}

/**
* is_prime - Check if number is prime
* @n: number
* Return: 1 if number is prime else
* return 0
*/
int is_prime(unsigned long n)
{
	unsigned long i;

	for (i = 2; i * i <= n; i++)
	{
		if (n % 2 == 0)
			return (0);
	}

	return (1);
}
