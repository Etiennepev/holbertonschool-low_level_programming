#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: The integer value to store in the new node.
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

/**Si la list est vide le nouveau noeud devient la tête*/
		if (*head == NULL)
		{
			new_node->prev = NULL;
			*head = new_node;
			return (new_node);
		}
/**Sinon, parcourir jusqu'au dernier noeud*/
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
/**Ajouter le nouveau noeud à la fin*/
		temp->next = new_node;
		new_node->prev = temp;
		return (new_node);
}
