#include "main.h"
#include <stdio.h>

/**
* rev_string - reverses a string
* @s: pointer to character
*/
void rev_string(char *s)
{
	int len, i;

	len = _strlen(s);
	i = 0;

	for (; i < len / 2; i++)
	{
		swap_char(s + i, s + (len - 1 - i));
	}
}

/**
* _strlen - Returns the length of a string
* @s: pointer to character
* Return: length of the string 'count'
*/
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}

/**
* swap_char - swap value of two characters
* @a: first character
* @b: second character
*/
void swap_char(char *a, char *b)
{
	char temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
