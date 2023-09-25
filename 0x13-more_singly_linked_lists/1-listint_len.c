#include "lists.h"

/**
 * listint_len - function to determine no. of elements in a linked list
 * @h: head of list
 *
 * Return: no. of elements
 */

size_t listint_len(const listint_t *h)
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
