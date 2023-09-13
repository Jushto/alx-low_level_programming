#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter for each
 * array element
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to needed function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
