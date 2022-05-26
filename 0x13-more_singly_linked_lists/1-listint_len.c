#include <stdio.h>
#include "lists.h"

/**
* listint_len - counts the number of elements in a linked list_t list
* @h: pointer to the head of the list
* Return: returns the number of elements in a linked list_t list
*/
size_t listint_len(const listint_t *h)
{
	int num = 0;
	const listint_t *node_ptr;

	if (h != NULL)
	{
		node_ptr = h;
		do {
			node_ptr = node_ptr->next;
			num++;
		} while (node_ptr);
	}
	return (num);
}


