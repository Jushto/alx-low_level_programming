#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new data type of dog with its name, age and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
