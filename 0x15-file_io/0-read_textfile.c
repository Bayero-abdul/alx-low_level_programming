#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n, m;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(*buf) * letters);
	if (buf == NULL)
		return (0);
	
	n = read(fd, buf, letters);
	m = write(STDOUT_FILENO, buf, n);
	if (n == -1 || n != m)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (m);
}
