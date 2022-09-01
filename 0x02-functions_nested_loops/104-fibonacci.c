#include <stdio.h>

int getfirstdigit(int num);
void addnum(unsigned long a, unsigned long b);


/**
* main - Prints the first 98 fibonacci numbers,
* starting with 1 and 2
* Return: 0
*/
int main(void)
{
	int i;
	unsigned long a, b, c, x = 7540113804746346429, z = 12200160415121876738;

	a = 1;
	b = 1;

	for (i = 0; i < 98; i++)
	{
		if (i == 0)
			printf("1");
		else
		{
			c = a + b;
			printf("%lu", c);
			a = b;
			b = c;
		}

		if (i != 97)
			printf(", ");
		else
			printf("\n");
	}
	printf("%lu", x + z);
	return (0);
}

void addnum(unsigned long a, unsigned long b)
{
	int firstdigit_sum = 0, sum = 0;

	int last_digit_a = a%10;
	int last_digit_b = b%10;
	sum = last_digit_a + last_digit_b + firstdigit_sum;
	while (sum)
	{
		if (sum >= 10)
		{
			firstdigit_sum = getfirstdigit(sum);
			printf("%d", sum%10);
		}
		else
		{
			printf("%d", sum);
			firstdigit_sum = 0;
		}
		a = a /10;
		b = b / 10;
		last_digit_a = a%10;
		last_digit_b = b%10;
		sum = last_digit_a + last_digit_b + firstdigit_sum;
	}
}

int getfirstdigit(int num)
{
	while (num >= 10)
	{
		num = num / 10;
	}
	return (num);
}
