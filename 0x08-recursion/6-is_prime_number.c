#include "main.h"

/**
 * is_divisible - recursively divdie till divisor is 1
 * @n: number under focus
 * @divisor: number to divide starting with n -1
 *
 * Return: 0 if divisor is 1, 1 if divisor is found
 */

int is_divisible(int n, int divisor)
{
	if (divisor == 1)
		return (0);
	if (n % divisor == 0)
		return (1);
	return (is_divisible(n, divisor - 1));
}

/**
 * is_prime_number - determine if noumber if prime
 * @n: number in focus
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!is_divisible(n, n - 1));
}
