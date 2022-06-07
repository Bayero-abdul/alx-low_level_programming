#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* get_nodeint_at_index - gets the nth node of the linked list
* @head: pointer to the head of the list
* @index: is the index of the node, starting at 0
* Return: returns the nth node of a listint_t linked list.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	u_int i = 0;

	while (head != NULL)
	{
		if (index == i++)
			return (head);
		head = head->next;
	}
	return (NULL);
}
