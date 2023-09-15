#include "main.h"

/**
 * main - multiplay 2 numbers
 * @argc: no. of arguments
 * @argv: argument vector
 *
 * Return: 0 on success; 1 otherwise
 */

int main(int argc, char *argv[])
{
	int res, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;

	printf("%d\n", res);
	return (0);
}
