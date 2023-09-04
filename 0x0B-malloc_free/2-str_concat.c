#include "main.h"

char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1, len2;
	int i, j;

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	if (s1 == NULL)
	       s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
