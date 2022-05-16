#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *string;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (get_type(format[i]))
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
									break;
				case 'i':
					printf("%d", va_arg(ap, int));
									break;
				case 'f':
					printf("%f", va_arg(ap, double));
									break;
				case 's':
					string = va_arg(ap, char*);
					if (string == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", string);
			}
			print_separator(format[i + 1]);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

/**
* get_type - Checks if character in format is a data type
* @c: character
* Return: Character if found else return '\0'
*/
int get_type(char c)
{
	int i = 0;
	char types[] = {'c', 'i', 'f', 's', '\0'};

	while (types[i] != '\0' && types[i] != c)
		i++;
	return (types[i]);
}

/**
* print_separator - print separator
* @c: character
*/
void print_separator(char c)
{
	switch (c)
	{
		case '\0':
			break;
		default:
			printf(", ");
			break;
	}
}

