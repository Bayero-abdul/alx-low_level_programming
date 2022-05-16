#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - computess sum of all its parameters
* @n: number of arguments
* Return: sum of all of its parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += var(ap, int);
	va_end(ap);
	return (sum);
}
