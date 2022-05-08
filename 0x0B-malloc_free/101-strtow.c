#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* strtow - splits a string into words
* @str: pointer to string
* Return: a pointer to an array of strings (words)
*/
char **strtow(char *str)
{
	int index, len_word, num_of_words, j, k;
	 char **strings;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_of_words = count_words(str);
	if (num_of_words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (num_of_words + 1));
	if (strings == NULL)
	{
		free(strings);
		return (NULL);
	}

	index = 0;
	for (j = 0; j < num_of_words; j++)
	{
		while (str[index] == ' ')
			index++;

		len_word = get_len_word(&str[index]);
		strings[j] = malloc(sizeof(char) * (len_word + 1));
		if (strings[j] == NULL)
		{
			for (; j >= 0; j--)
				free(strings[j]);
			free(strings);
			return (NULL);
		}

		for (k = 0; k < len_word; k++)
			strings[j][k] = str[index++];
		strings[j][k] = '\0';
	}
	strings[j] = NULL;

	return (strings);
}

/**
* count_words - count number of words in the str s
* @s: pointer to string
* Return: number of words
*/
int count_words(char *s)
{
	int count = 0;

	if (*s++ != ' ')
	{
		count++;
	}

	while (*s != '\0')
	{
		if (*s != ' ' && *(s - 1) == ' ')
			count++;
		s++;
	}
	return (count);
}

/**
* get_len_word - Gets the length of a word in the string
* @str: pointer to string
* Return: length of the word
*/
int get_len_word(char *str)
{
int len = 0;

while (*str++ != ' ' && *str != '\0')
{
len++;
}
return (len);
}
