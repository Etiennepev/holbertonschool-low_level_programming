#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list -  
 *
 * @str: 
 * @head: 
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		/** On garde une référence au nœud actuel */
		temp = head;
		/** On avance vers le prochain nœud */
		head = head->next;
	}
	/** Libère la chaîne de caractères du nœud actuel (si elle existe) */
	free (temp->str);
	/** Libère le nœud actuel */ 
	free (temp);
}
