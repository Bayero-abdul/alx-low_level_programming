#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: number of command line arguments
* @argv: array containing the command line arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, res;

	if (argc > 1)
	{
		res = 1;
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
