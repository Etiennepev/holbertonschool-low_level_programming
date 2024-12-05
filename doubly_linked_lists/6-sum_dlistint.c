#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Retrieves the nth node of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	unsigned int sum = 0;

	while (temp != NULL)
	{
	sum += temp->n;
	temp = temp->next;
	}
	return (sum);
}
