#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Prints all elements of a list_t list
 *
 * @h: pointer to the head of the linked list
 *
 * Return: The nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
