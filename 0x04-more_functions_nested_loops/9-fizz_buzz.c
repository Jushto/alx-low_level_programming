#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;

	for ( ; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i == 100)
			printf("FizzBuzz\n");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
