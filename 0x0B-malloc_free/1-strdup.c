#include "main.h"

/**
 * _strdup - duplicate a string in a new memory allocation
 * @str: string to be duplicated
 *
 * Return: pointer to duplicated string on success
 * NULL if str is null or insufficuent memoyr was available
 */

char *_strdup(char *str)
{
	char *s;
	int i, count = 0;

	if (str == NULL)
		return (NULL);

	while (str[count] != 0)
		count++;

	s = (char *)malloc((count + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= count; i++)
		s[i] = str[i];

	return (s);
}
