#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to the head of the list
* @idx: index of the list where the new node should be added. Index starts at 0
* @n: number to insert
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	u_int i;
	listint_t *temp, *new_node;
		
	if (!head)
		return (NULL);
	
	i = 0;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	
	if (*head == NULL && idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}

	temp = *head;
	while (temp != NULL)
	{
		if (idx == i)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		temp = temp->next;
		i++;
	}
	
	return (NULL);
}
