#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list ap;
	char *string;

	va_start(ap, format);
	i = 0;

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
						printf("(nil)");
					else
						printf("%s", string);
					break;
			}

			if (format[i + 1] != '\0')
				printf(", ");
		}
		i++;
	}
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
