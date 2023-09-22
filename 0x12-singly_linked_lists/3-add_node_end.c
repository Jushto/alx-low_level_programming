#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node at end of linked list
 * @head: pointer to start of list
 * @str: string to be added
 *
 * Return: address of new node: NULL otherwise
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	unsigned int len;

	len = 0;
	temp = *head;

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
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;
	return (newnode);
}
