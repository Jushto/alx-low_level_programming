#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of a linked list
 * @h: head of linked list
 *
 * Return: no. of nodes in list
 */

size_t print_list(const list_t *h)
{
	char *s;
	int count, i;

	i = count = 0;
	s = h->str;

	while (h != NULL)
	{
		if (s == NULL)
			printf("[0] (nil)");
		else
		{
			count = _strlen(s);
			printf("[%d] %s\n", count, s);
		}
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * _strlen - determine length of string
 * @s: string to be worked on
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
