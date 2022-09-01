#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a list_t list
* @h: pointer to the head of the list
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int num = 0;
	const listint_t *node_ptr;

	if (h != NULL)
	{
		node_ptr = h;
		do {
			printf("%d\n", node_ptr->n);
			node_ptr = node_ptr->next;
			num++;
		} while (node_ptr);
	}
	return (num);
}
