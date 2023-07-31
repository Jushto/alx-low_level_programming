#include "main.h"

int pali(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check if string is palindrome
 * @s: input string
 *
 * Return: 1 isf string is empty
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pali(s, 0, _strlen_recursion(s)));
}

/**
 * pali - function to cehck if string is palindrom
 * @s: input string
 * @i: counter
 * @len: length of string
 *
 * Return: 1 if palindrome; 0 otherwise
 */

int pali(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - i - 1))
		return (0);
	if (i >= len)
		return (1);
	return (pali(s, i + 1, len));
}

/**
 * _strlen_recursion - return length of string
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

