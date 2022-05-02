#include <stdio.h>

/**
* main - prints all the arguments it recieves
* @argc: number of command line arguments
* @argv: array containing the command line arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
