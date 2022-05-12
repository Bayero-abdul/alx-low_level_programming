#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* new_dog - creates a new dog
* @name: name to assign
* @age: age to assign
* @owner: owner to assign
* Return: pointer to struct dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	d = malloc(sizeof(*d));
	if (!d)
		return (NULL);

	d->name = malloc(sizeof(*d->name) * _strlen(name) + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(*d->owner) * _strlen(owner) + 1);
	if (!d->owner)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);

	return (d);
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

/**
* _strcpy - copies string
* @dest: destination the string is copied to
* @src: where the string is copied from
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while ((*dest++ = *src++) != '\0')
		;

	return (temp);
}
