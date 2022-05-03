#include <stdio.h>
#include <stdlib.h>

void make_change_and_count(int *cent, int *count, int n);

/**
* main -  prints the minimum number of coins to make
* change for an amount of money
* @argc: number of command line arguments
* @argv: array containing the command line arguments
* Return: 0 if no error else 1
*/
int main(int argc, char *argv[])
{
	int count = 0, cent = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cent > 0)
	{
		if (cent >= 25)
			make_change_and_count(&cent, &count, 25);
		else if (cent >= 10)
			make_change_and_count(&cent, &count, 10);
		else if (cent >= 5)
			make_change_and_count(&cent, &count, 5);
		else if (cent >= 2)
			make_change_and_count(&cent, &count, 2);
		else
			make_change_and_count(&cent, &count, 1);
	}
printf("%d\n", count);
return (0);
}

/**
* make_change_and_count - make change and increment count
* @cent: pointer to cent
* @count: pointer to count
* @n: change
*/
void make_change_and_count(int *cent, int *count, int n)
{
*cent -= n;
*count = *count + 1;
}
