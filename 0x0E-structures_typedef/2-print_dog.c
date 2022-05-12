#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dog.h"

/**
* print_dog - prints the struct dog
* @d: pointer to the struct dog
*/

void print_dog(struct dog *d)
{
	if (d)
	{

		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: %s\n", "(nil)");
		}

		if (d->age != 0 || d->age != NAN)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: %s\n", "(nil)");
		}

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: %s\n", "(nil)");
		}

	}
}

