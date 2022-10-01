#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - computes the sum of elements in the list
 * @head: pointer to list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
