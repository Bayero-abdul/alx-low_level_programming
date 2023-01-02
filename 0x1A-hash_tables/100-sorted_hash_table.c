#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * shash_table_create - Creates a hash table
 * @size: size of the hash table
 * Return: hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long i;
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: add key/value pair
 * @value: add key/value pair
 * Return: 1 if succeeded else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *walk;
	int index;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	walk = ht->array[index];
	/* change the value if key exist */
	while (walk != NULL)
	{
		if (strcmp(walk->key, key) == 0)
		{
			walk->value = strcpy(walk->value, value);
			return (1);
		}
		walk = walk->next;
	}

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		if (strcmp(key, ht->shead->key) < 0)
		{
			new_node->snext = ht->shead;
			ht->shead->sprev = new_node;
			ht->shead = new_node;
		}
		else
		{
			walk = ht->shead;
			while (walk->snext)
			{
				if (strcmp(key, walk->snext->key) < 0)
					break;
				walk = walk->snext;
			}
			new_node->sprev = walk;
			new_node->snext = walk->snext;
			if (walk->snext)
				walk->snext->sprev = new_node;
			walk->snext = new_node;
		}
	}

	if (new_node->snext == NULL)
		ht->stail = new_node;
	else
	{
		walk = new_node;
		while (walk->snext)
			walk = walk->snext;
		ht->stail = walk;
	}

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: the value associated with the element, or
 * NULL if key couldnt be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	int index;
	shash_node_t *walk;

	if (ht == NULL || ht->array == NULL || key[0] == '\0' || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	walk = ht->array[index];
	while (walk != NULL)
	{
		if (strcmp(walk->key, key) == 0)
			return (walk->value);
		walk = walk->next;
	}
	return (NULL);
}


/**
 * shash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int sign = 0;
	shash_node_t *walk;

	if (ht == NULL)
		return;

	printf("{");
	walk = ht->shead;
	while (walk)
	{
		if (sign == 1)
			printf(", ");
		if (walk != NULL)
			printf("'%s': '%s'", walk->key, walk->value);
		walk = walk->snext;
		sign = 1;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table
 * @ht: hash table
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int sign = 0;
	shash_node_t *walk;

	if (ht == NULL)
		return;

	printf("{");
	walk = ht->stail;
	while (walk)
	{
		if (sign == 1)
			printf(", ");
		if (walk != NULL)
			printf("'%s': '%s'", walk->key, walk->value);
		walk = walk->sprev;
		sign = 1;
	}
	printf("}\n");
}



/**
 * shash_table_delete - free allocated memories
 * @ht: hash table
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long i;
	shash_node_t *walk, *temp;

	for (i = 0; i < ht->size; i++)
	{
		walk = ht->array[i];
		while (walk != NULL)
		{
			temp = walk;
			walk = walk->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
