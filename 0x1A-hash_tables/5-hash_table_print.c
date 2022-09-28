#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, sign = 0;
	hash_node_t *walk;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		walk = ht->array[i];
		while (walk != NULL)
		{
			if (sign == 1)
				printf(", ");
			if (walk->next == NULL)
				printf("'%s: %s'", walk->key, walk->value);
			walk = walk->next;
			sign = 1;
		}
	}
	printf("}\n");
}
