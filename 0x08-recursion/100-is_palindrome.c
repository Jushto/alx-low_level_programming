#include "main.h"

/**
 * pali_recu - recursively determine if string is a palindrome
 * @s: input string
 * @i: iterator
 * @leng: length of string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int pali_recu(char *s, int i, int leng)
{
	if (*(s + i) != *(s + leng - 1))
		return (0);
	if (i >= leng)
		return (1);
	return (pali_recu(s, i + 1, leng - 1));
}

/**
 * _strlen_recursion - function to determine length of string
 * @s: input string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s)
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}

/**
 * is_palindrome - check if string is palindrome
 * @s: pointer to string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pali_recu(s, 0, _strlen_recursion(s)));
}
