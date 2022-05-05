#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str: pointer to string
* Return: pointer to a duplicate of string pointer str is
* pointing to
*/
char *_strdup(char *str)
{
	int i;
	char *s;
	int str_len;

	if (str == NULL)
	{
		return (NULL);
	}

	str_len = _strlen(str);
	s = malloc((sizeof(char) * str_len) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while ((s[i] = str[i]) != '\0')
		i++;

	return (s);
}

/**
* _strlen - computes a length of a string
* @s: pointer to the string
* Return: length of the string
*/
int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;

	return (p - s);
}
