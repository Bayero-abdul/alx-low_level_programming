#include "main.h"

/**
* print_rev - prints a string, in reverse
* @s: pointer to character
*/
void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
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
