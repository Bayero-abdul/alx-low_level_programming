#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index index of a
 * dlistint_t linked list
 * @head: pointer to pointer to a double linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	
	current = *head;
	i = 0;

	while (current->next && (i < index - 1))
		current = current->next;

	if (current == NULL)
		return (-1);

	temp = current->next;
	current->next = current->next->next;
	if (current->next && current->next->next)
		current->next->next->prev = current;
	free(temp);

	return (1);
}
