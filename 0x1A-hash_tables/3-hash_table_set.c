#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: add key/value pair
 * @value: add key/value pair
 * Return: 1 if succeeded else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *walk;
	int index;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		walk = ht->array[index];
		while (walk != NULL)
		{
			if (strcmp(walk->key, key) == 0)
			{
				free(walk->value);
				walk->value = strdup(value);
				return (1);
			}
			walk = walk->next;
		}

		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
