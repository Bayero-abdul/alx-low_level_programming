#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: the value associated with the element, or
 * NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *walk;

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
