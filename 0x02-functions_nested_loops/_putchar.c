#include <unistd.h>

/**
 * _putchar - writes the character c to std output
 * @c : the character to print
 * Return: 1 (Success)
 * On error: -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
