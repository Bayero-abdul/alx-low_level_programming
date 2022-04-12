#include "main.h"

/**
* _islower - Checks if a character is lowercase
* @c: the character to be checked
*
* Return: 1 if the character is lowercase else returns 0
*/
int _islower(int c)
{
	int i = 97;

	while (i <= 122)
	{
		if (c == i)
			return (1);
		i++;
	}
	return (0);
}
