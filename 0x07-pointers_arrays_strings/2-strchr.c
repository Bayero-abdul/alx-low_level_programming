#include "main.h"
#include <stdio.h>

/**
* _strchr - locates a character in a string
* @s: pointer to the string
* @c: character to locate
* Return: pointer to the first occurrence
* of the character c in the string s, or NULL
*/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++ != '\0');

	return (NULL);
}
