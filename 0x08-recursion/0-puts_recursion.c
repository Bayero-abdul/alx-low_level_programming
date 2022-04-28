#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - Prints a string followed by a newline
* @s: pointer to the string
*/
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s == '\0')
	{
		_putchar(*s);
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
