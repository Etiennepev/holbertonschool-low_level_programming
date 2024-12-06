#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a specified index in
 * a doubly linked list.
 *
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted (starting at 0).
 *
 * Return: 1 if successful, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next; /*La tête devient le deuxième nœud*/
		if (*head != NULL)
			(*head)->prev = NULL; /*Supprime le lien vers l'ancien premier nœud*/
		free(temp); /*Libère la mémoire du nœud supprimé*/
		return (1);
	}
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	free(temp);
	return (1);
}
