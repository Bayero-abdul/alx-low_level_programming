#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: number of arguments
* @av: array of arguments
* Return: pointer to a new string
*/
char *argstostr(int ac, char **av)
{
	int i, j, len, count = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = sum_len_of_strings(ac, av);
	str = malloc(sizeof(char) * len + ac + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[count++] = av[i][j];
		}
		str[count++] = '\n';
	}
	str[count] = '\0';

	return (str);
}

/**
* sum_len_of_strings - compute length of all the strings in an array
* and sum them up
* @n: number of strings in the array
* @arr: array
* Return: sum of all the length of the strings in the array
*/
int sum_len_of_strings(int n, char **arr)
{
	int i, j, len = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; arr[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	return (len);
}
