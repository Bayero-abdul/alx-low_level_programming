#include "main.h"

/**
* _isalpha - Checks for alphabetic character
* @c: the character to be checked
*
* Return: 1 if c is lowercase or uppercase
*/
int _isalpha(int c)
{
	int i = 97;
	int j = 65;

	while (i <= 122)
	{
		if (c == i)
			return (1);
		i++;
	}
	while (j <= 90)
	{
		if (c == j)
			return (1);
		j++;
	}
	return (0);
}
