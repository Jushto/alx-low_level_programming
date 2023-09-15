#include "main.h"

/**
 * main - adds positive numbers
 * @argc: no. of arguments
 * @argv: argument vector
 *
 * Return: 0 on success; 1 if error
 */

int main(int argc, char *argv[])
{
	int i, num, sum, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num >= 0)
			sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
