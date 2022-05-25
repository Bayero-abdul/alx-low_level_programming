#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: pointer to pointer pointing to a list_t
* @str: pointer to a string
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *node_ptr;

	if (head == NULL || str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		node_ptr = *head;
		while (node_ptr->next != NULL)
			node_ptr = node_ptr->next;
		node_ptr->next = temp;
	}

	if (*head == NULL)
		return (NULL);

	return (*head);
}
