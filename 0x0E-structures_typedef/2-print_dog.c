#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function to print a struct dog
 * @d: struct to print
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL || d->name[0] == '\0')
		d->name = "(nil)";
	if (d->owner == NULL || d->owner[0] == '\0')
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
