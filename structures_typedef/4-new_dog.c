#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include "main.h"
#include <string.h>
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
