#include "main.h"

/**
* _isupper - Checks if a character is uppercase
* @c: the character to be checked
*
* Return: 1 if the character is lowercase else returns 0
*/
int _isupper(int c)
{
	int i = 65;

	while (i <= 90)
	{
		if (c == i)
			return (1);
		i++;
	}

	return (0);
}
