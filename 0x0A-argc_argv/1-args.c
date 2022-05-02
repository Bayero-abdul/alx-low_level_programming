#include <stdio.h>

/**
* main - prints the number of command line arguments
* @argc: number of command line arguments
* @argv: array containing the command line arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
