#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenate two strings
* @s1: first string
* @s2: second string
* @n: first n byte of s2
* Return: pointer to the allocated memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	p = malloc(sizeof(*p) * len_s1 + len_s2 + 1);

	i = 0;
	while (*s1 != '\0')
		p[i++] = *s1++;

	for (j = 0; s2[j] != '\0' && j < n; j++)
		p[i++] = s2[j];

	for (; j < n; j++)
		p[i++] = '\0';

	return (p);
}

/**
* _strlen - computes length of a string
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
