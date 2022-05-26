#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a list_t list
* @head: pointer to pointer pointing to a list_t
* @n: number
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *node_ptr;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
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
