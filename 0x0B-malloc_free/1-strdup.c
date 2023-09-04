#include "main.h"

/**
 * _strdup - duplicate a string in memory
 * @str: copy of the string
 *
 * Return: poitner to new string; NULL if str or s is null
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		s[j] = str[j];
	return (s);
}
