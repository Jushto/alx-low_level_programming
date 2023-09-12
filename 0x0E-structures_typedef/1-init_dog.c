#include "dog.h"

/**
 * init_dog - function to initialize a variable of type struct dog
 * @d: variable + pointer to memory location storing variables
 * @name: name of dog
 * @age: age of dog
 * @owner: owner's name
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}