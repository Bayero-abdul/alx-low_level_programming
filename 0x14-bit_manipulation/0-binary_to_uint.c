#include "main.h"
#include <stdio.h>

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: is pointing to a string of 0 and 1 chars
* Return: the converted number, or 0 if
*	there is one or more chars in the string b that is not 0 or 1
* or b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int power;

	if (b == NULL)
		return (0);

	sum = 0;
	power = _strlen(b) - 1;
	for (; *b != '\0'; b++)
	{
		if (*b != 48 && *b != 49)
			return (0);

		if (*b == '1')
		{
			sum += 1 * _pow(2, power);
			power--;
		}
		else
		{
			power--;
		}
	}
	return (sum);
}

/**
* _strlen - Returns the length of a string
* @s: pointer to character
* Return: length of the string 'count'
*/
int _strlen(const char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}

/**
* _pow - compute the value of x raised to the power of y
* @x: base
* @y: power
* Return: returns the value of x raised to the power of y
*/
int _pow(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	y--;

	return (x * _pow(x, y));
}
