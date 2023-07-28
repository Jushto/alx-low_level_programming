#include "lists.h"

/**
 * add_node - add new node at beginning of a list_t list
 * @head: double pointer to list
 * @str: new string to add
 *
 * Return: address of new element, NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}

