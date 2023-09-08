#include "main.h"

/**
 * string_nconcat - concatenates two strings with first n bytes of s2
 * @s1: input string
 * @s2: input string
 * @n: number of bytes in s2
 *
 * Return: pointer to allocate memory; NULL if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	unsigned int i, j;
	char *str;

	len1 = len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		str = malloc(len1 + len2 + 1);
	else
		str = malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	j = 0;
	while (n < len2 && i < (len1 + n))
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	while (n >= len2 && i < (len1 + len2))
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
