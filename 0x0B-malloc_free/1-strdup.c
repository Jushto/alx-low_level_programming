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
	int i;

	s = (char *)malloc(sizeof(str));
	if (str == NULL || s == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
