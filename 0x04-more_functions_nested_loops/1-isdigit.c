#include "main.h"

/**
* _isdigit - Checks for a digit
* @c: the argument to be checked
*
* Return: 1 if the c is digit else returns 0
*/
int _isdigit(int c)
{
	int i = 48;

	while (i <= 57)
	{
		if (c == i)
			return (1);
		i++;
	}

	return (0);
}
