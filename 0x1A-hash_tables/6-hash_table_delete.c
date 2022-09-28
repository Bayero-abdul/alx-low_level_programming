#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *walk, *temp;

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
