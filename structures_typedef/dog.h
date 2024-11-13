#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure qui définit un chien
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (nombre à virgule flottante)
 * @owner: Nom du propriétaire (chaîne de caractères)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

#endif
