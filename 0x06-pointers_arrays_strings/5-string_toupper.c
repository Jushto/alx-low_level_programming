#include "main.h"

/**
 * string_toupper - function changing all lowercase letters to uppercase
 * @str: pointer to string
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
