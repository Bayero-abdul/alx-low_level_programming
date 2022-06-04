#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/**
* main - copies content from one file to another
* @argc: number of command line argument
* @argv: array of strings
* Return: 0 on success
*/
int main(int argc, char **argv)
{
	ssize_t w, r, n;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	r = open(argv[1], O_RDONLY);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	w = creat(argv[2], 0664);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((n = read(r, buf, 1024)) > 0)
		write(w, buf, n);

	buf[n] = '\0';

	if (close(w) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", w);
		exit(100);
	}
	if (close(r) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", r);
		exit(100);
	}
	return (0);
}
