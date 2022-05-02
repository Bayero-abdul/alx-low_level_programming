#include <stdio.h>

/**
* main - accept and print command line argument
* @argc: number of command line arguments
* @argv: array containing the command line arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
