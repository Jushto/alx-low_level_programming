#include <stdlib.h>
#include "main.h"

/**
 */

char *argstostr(int ac, char **av)
{
	char *arg;
	int i = 0, j, k = 0, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	arg = malloc(1 + (sizeof(char) * size));
	if (arg == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			arg[k] = av[i][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		i++;
	}
	arg[k] = '\0';
	return (arg);
}
