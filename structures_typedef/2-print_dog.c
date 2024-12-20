#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include "main.h"
/**
 * print_dog - Prints the details of a struct dog
 * @d: pointer to struct dog to be printed
 *
 * Return: Nothing
 **/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
