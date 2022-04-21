#include "main.h"

/**
* puts2 - prints every other character of a string
* @str: pointer to character
*/
void puts2(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(*(str + i));
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
