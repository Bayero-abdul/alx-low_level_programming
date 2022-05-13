#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
* main - performs simple operations
* @argc: number of argument
* @argv: array of pointers to characters
* Return: 0 if no error
*/
int main(int argc, char *argv[])
{
	char *op;
	int (*func)(int, int);
	int res, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
	  exit(99);
	}

	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(op);
	res = func(a, b);

	printf("%d\n", res);
	return (0);

}

