#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to a pointer to a linked list
 * Return: pointer to reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *result = NULL;

	while (*head != NULL)
	{
		listint_t *next = (*head)->next;
		(*head)->next = result;
		result = *head;
		*head = next;
	}
	*head = result;
	return (*head);
}
