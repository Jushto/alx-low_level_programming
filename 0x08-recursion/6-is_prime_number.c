#include "main.h"

/**
 * is_prime_number - function to determine if number is prime
 * @n: input value
 *
 * Return: 1 if is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else if (n <= 0)
		return (0);
	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)
		return (0);
	return (1);
}
