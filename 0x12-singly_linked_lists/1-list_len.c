#include "lists.h"

/**
 * list_len - determine no. of elments in linked list
 * @h: head of list
 *
 * Return: no. of elements
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
