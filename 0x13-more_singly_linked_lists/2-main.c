#include "lists.h"
#include <stdio.h>

int main(void)
{
	listint_t *head;
	size_t n;

	head = NULL;
	add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	n = print_listint(head);
	printf("%lu elements\n", n); 
	return (0);
}
