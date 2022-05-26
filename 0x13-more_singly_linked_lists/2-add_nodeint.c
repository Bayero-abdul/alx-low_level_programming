#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a list_t list
* @head: pointer to pointer pointing to a list_t
* @n: number
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;

	*head = temp;

	if (*head == NULL)
		return (NULL);

	return (*head);
}


