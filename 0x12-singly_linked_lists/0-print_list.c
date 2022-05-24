#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the head of the list
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int num = 0;
	const list_t *node_ptr;

	if (h != NULL)
	{
		node_ptr = h;
		do {
			if (node_ptr->str)
				printf("[%d] %s\n", node_ptr->len, node_ptr->str);
			else
				printf("[0] (nil)\n");
			node_ptr = node_ptr->next;
			num++;
		} while (node_ptr);
	}
	return (num);
}


