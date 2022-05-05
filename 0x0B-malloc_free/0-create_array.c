#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars, and
* initializes it with a specific char
* @size: size of array to create
* @c: character to fill array with
* Return: pointer to string
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc((sizeof(char) * size));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';

	return (s);
}
