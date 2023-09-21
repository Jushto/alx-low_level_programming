#ifndef SINGLY_LINKED_H
#define SINGLY_LINKED_H

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string
 * @len: length of string
 * @next: pointer to next node
 *
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
int _strlen(char *);

#endif
