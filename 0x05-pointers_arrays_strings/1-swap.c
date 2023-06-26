#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: first value to be swapped
 * @b: second value to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
