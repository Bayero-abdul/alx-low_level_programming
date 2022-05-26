#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* @head: pointer to pointer pointing to
* the head of the list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	node = *head;
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}

	*head = NULL;
}
