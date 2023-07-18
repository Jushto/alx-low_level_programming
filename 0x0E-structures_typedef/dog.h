#ifndef POPPY_H
#define POPPY_H

#include <stdlib.h>

/**
 * struct dog - information on a dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: LOnger description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
