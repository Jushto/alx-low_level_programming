#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: input string
 * @s2: input string
 *
 * Return: pointer to nwely allocated space in memory with s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	char *cont;
	int count1 = 0, count2 = 0;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[count1] != 0)
		count1++;
	while (s2[count2] != 0)
		count2++;

	cont = (char *)malloc((count1 + count2 + 1) * sizeof(char));

	if (cont == NULL)
		return (NULL);

	while (s1[i] != 0)
	{
		cont[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		cont[i] = s2[j];
		i++;
		j++;
	}
	cont[i] = '\0';

	return (cont);
}
