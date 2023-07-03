#include "main.h"

/**
 * _strchr - function locating character in a string
 *
 * @s: input string
 * @c: character to be found
 *
 * Return: pointer to first occurence of c in the string
 * else return 0
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
