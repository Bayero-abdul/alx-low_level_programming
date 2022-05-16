#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - prints strings
* @separator: is the string to be printed between number
* @n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *string;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
			printf("(nil)");
		else
		{
			printf("%s", string);
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ap);
}
