#include <stdio.h>

void print_digits(int i, int j, int k, int l);

/**
* main - prints all possible combinations of single-digit numbers
* using ascii
*
* Return: 0 if there is no error
*/
int main(void)
{
	int i, j, k, l, num_end;

	i = '0';
	num_end = '9';
	while (i <= num_end)
	{
		j = '0';
		while (j <= num_end)
		{
			k = '0';
			while (k <= num_end)
			{
				l = '0';
				while (l <= num_end)
				{
					print_digits(i, j, k, l);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}


/**
* print_digits - prints two two-digit numbers
* @i: iteration variable
* @j: iteration variable
* @k: iteration variable
* @l: iteration variable
*/
void print_digits(int i, int j, int k, int l)
{
	if (i < k || (i == k && j < l))
	{
		putchar(i);
		putchar(j);
		putchar(' ');
		putchar(k);
		putchar(l);
		if (i == '9' && j == '8' && k == '9' && l == '9')
			return;
		putchar(',');
		putchar(' ');
	}
}
