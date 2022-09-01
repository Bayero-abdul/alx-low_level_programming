#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to a double linked list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (!head)
		return (0);

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
