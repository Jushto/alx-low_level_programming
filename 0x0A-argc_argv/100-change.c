#include "main.h"

int change(int);

/**
 * main - print min. no. of coins to make change for an amount of money
 * @argc: no. of arguments
 * @argv: argument vector
 *
 * Return: 0 on success; 1 if failed
 */

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", change(cents));
	return (0);
}

/**
 * change - calculate no. of coins to make change for an amt. of money
 * @cents: amount of cents to give back
 *
 * Return: coins
 */
int change(int cents)
{
	int coins;

	coins = 0;
	while (cents > 0)
	{
		while (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		while (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		while (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		while (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		while (cents >= 1)
		{
			cents -= 1;
			coins++;
		}
	}
	return (coins);
}
