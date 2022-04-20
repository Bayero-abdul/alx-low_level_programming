#include "main.h"

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
