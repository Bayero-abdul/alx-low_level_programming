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
	char *word, **strings;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (j = 0; str[j] == ' '; j++)
	{
		if (str[j] == '\0')
			return (NULL);
	}
	num_of_words = count_words(str);
	strings = malloc(sizeof(char *) * num_of_words);
	if (strings == NULL)
		return (NULL);

	index = 0;
	for (j = 0; j < num_of_words; j++)
	{
		len_word = get_len_word(&index, str);
		strings[j] = malloc(sizeof(char) * len_word);
		if (strings[j] == NULL)
		{
			for (; j >= 0; j--)
				free(strings[j]);
			free(strings);
			return (NULL);
		}
	}

	index = 0;
	for (j = 0; j < num_of_words; j++)
	{
		word = get_word(&index, str);
		for (k = 0; *word != ' '; k++, word++)
			strings[j][k] = *word;
		strings[j][k] = '\0';
	}
	strings[j] = NULL;
	return (strings);
}

/**
* get_word - return pointer pointing to
* beginning of a word in the string str
* @str: pointer to string
* @index: pointer to integer(index)
* Return: pointer pointing to
*				 beginning of a word
*/
char *get_word(int *index, char *str)
{
	char *ptr;

	while (str[*index] == ' ')
		*index = *index + 1;
	ptr = &str[*index];
	while (str[*index] != ' ')
		*index = *index + 1;

	return (ptr);
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
* @index: pointer to integer(index)
* @str: pointer to string
* Return: length of the word
*/
int get_len_word(int *index, char *str)
{
	int len = 0;

	while (str[*index] == ' ')
		*index = *index + 1;

	while (str[*index] != ' ')
	{
		len++;
		*index = *index + 1;
	}
	return (len);
}
