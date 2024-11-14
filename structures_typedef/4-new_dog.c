#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string.
 * @s: string to analyze.
 * Return: lenght of s.
 **/

int _strlen(char *s)
{
	int length;

	for (length = 0;  s[length] != '\0'; length++)
	{
	}
	return (length);
}

/**
 * _strncpy - copies a string.
 * @dest: string of destinatation.
 * @src : string to copy.
 * @n: bite limit.
 * Return: dest.
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 *new_dog - Creates a new dog and returns a pointer to the new dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the newly created dog_t structure, or NULL
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_inst = malloc(sizeof(dog_t));

	if (new_dog_inst == NULL)
	{
		return (NULL);
	}
	new_dog_inst->name = malloc(strlen(name) + 1);

	if (new_dog_inst->name == NULL)
	{
		free(new_dog_inst);
		return (NULL);
	}
	strcpy(new_dog_inst->name, name);

	new_dog_inst->owner = malloc(strlen(owner) + 1);

	if (new_dog_inst->owner == NULL)
	{
		free(new_dog_inst);
	return (NULL);
	}
	strcpy(new_dog_inst->owner, owner);

	new_dog_inst->age = age;

	return (new_dog_inst);
}
