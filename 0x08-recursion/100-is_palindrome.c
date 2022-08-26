#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Checks if string is a palindrome
 * @s: pointer to a string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i, j, length;
	char *str, buf[100];

	if (s == NULL)
		return (0);

	length = _strlen(s);
	if (s[0] == '\0' || length == 1)
		return (1);

	i = 0;
	j = length - 1;
	if (s[i] != s[j])
	{
		return (0);
	}
	str = slice(s, buf, i + 1, j - 1);
	return (is_palindrome(str));
}

/**
 * slice - slice a string
 * @str: pointer to a string
 * @buf: pointer to a buffer
 * @start: an integer
 * @end: an integer
 * Return: sliced string
 */
char *slice(char str[], char *buf, int start, int end)
{
	int i = 0;

	while (start <= end)
	{
		buf[i] = str[start];
		i++;
		start++;
	}

	buf[i] = '\0';
	return (buf);
}

/**
 * _strlen - gets the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s++ != '\0')
		count++;

	return (count);
}
