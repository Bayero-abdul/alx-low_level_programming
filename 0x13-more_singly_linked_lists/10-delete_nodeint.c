#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - delete a node at a given position
* @head: pointer to the head of the list
* @index: index of the list where the new node should be added.
* Index starts at 0
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *temp1;
	listint_t *current;
	unsigned int i;

	if (index == 0)
	{
		temp = *head;
		if (*head != NULL)
			*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}

	temp = current->next->next;
	temp1 = current->next;
	current->next = temp;
	free(temp1);
	return (1);
}
