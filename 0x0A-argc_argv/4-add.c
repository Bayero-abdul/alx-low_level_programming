#include <stdio.h>
#include <stdlib.h>

/**
* main - Add positive numbers
* @argc: number of command line arguments
* @argv: array containing the command line arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i, res = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (atoi(argv[i]) >= '0' && atoi(argv[i]) <= '9')
			{
				res += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", res);
	}
	return (0);
}
