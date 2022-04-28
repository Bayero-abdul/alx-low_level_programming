#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - Prints a string in reverse order
* @s: pointer to the string
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	putchar(*s);
}
