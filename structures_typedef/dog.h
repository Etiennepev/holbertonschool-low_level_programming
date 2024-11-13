#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure qui définit un chien
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (nombre à virgule flottante)
 * @owner: Nom du propriétaire (chaîne de caractères)
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
