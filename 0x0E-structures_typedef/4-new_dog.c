#include "dog.h"
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
	dog_t d, *cpy;

	if (name == NULL || age <= 0 || owner == NULL)
		return (NULL);

	d.name = name;
	d.age = age;
	d.owner = owner;

	cpy = &d;
	if (cpy == NULL)
		return (NULL);

	return (cpy);
}
