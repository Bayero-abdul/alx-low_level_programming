#include "main.h"

/**
* _strcmp - compares two strings
* @s1: string 1
* @s2: string 2
* Return: 0 if s1 == s2,
* negative value if s1 < s2 and
* positive value if s1 > s2
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}
