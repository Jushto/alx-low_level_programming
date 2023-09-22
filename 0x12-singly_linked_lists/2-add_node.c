#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node at beginning of linked list
 * @head: pointer to pointer to head of list
 * @str: string to be added
 *
 * Return: address of new element; NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len;

	len = 0;

	while (str[len] != '\0')
		len++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
