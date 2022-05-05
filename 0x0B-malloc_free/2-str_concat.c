#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* str_concat - concatenates two strings
* @s1: pointer to string 1
* @s2: pointer to string 2
* Return: pointer to a concatenation of the two strings
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;
	int len_s1;
	int len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	s = malloc((sizeof(char) * (len_s1 + len_s2) + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; (s[i] = s2[j]) != '\0'; i++, j++)
		;

	return (s);
}

/**
* _strlen - computes a length of a string
* @s: pointer to the string
* Return: length of the string
*/
int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;

	return (p - s);
}
