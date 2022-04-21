#include "main.h"


/**
* puts_half - prints half of a string
* @str: pointer to character
*/
void puts_half(char *str)
{
	int i;
	int len = _strlen(str);

	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = len / 2;

	for (; i < len; i++)
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
