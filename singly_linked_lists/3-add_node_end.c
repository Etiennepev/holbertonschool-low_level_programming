#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -  Adds a new node at the end of a list_t list.
 *
 * @str: The string to be duplicated and added to the new node.
 * @head: A double pointer to the head of the list.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		while (str[lenght] != '\0')
		{
			lenght++;
		}
		new_node->len = lenght;

		new_node->next = NULL;
/**Si la list est vide le nouveau noeud devient la tête*/
		if (*head == NULL)
		{
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
			return (new_node);
}
