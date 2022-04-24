#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @str: pointer to the string
* Return: pointer to the string
*/
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i > 0 && is_sep(&str[i - 1]) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/**
* is_sep - checks if character c is among the separators
* in array 'sep'
* @c: c is the character to be checked
* Return: 1 if c in sep[], else 0
*/
int is_sep(char *c)
{
	char sep[] = {' ', '\t', '\n', '\n', ',', ';', ',',
								'.', '!', '?', '"', '(', ')', '{', '}'};
	char *ptr = sep;

	while (*ptr != '\0')
	{
		if (*c == *ptr)
			return (1);
		ptr++;
	}
	return (0);
}
