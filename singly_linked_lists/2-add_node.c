#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 *
 * @str: The string to be duplicated and added to the new node.
 * @head: A double pointer to the head of the list.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t lenght = 0;

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
			lenght++;

		new_node->len = lenght;

		new_node->next = *head;
		*head = new_node;
		return (new_node);
}
