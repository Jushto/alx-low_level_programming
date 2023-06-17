#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	int i = 0;

	for (i = 0; i < 10; i++)
		putchar (48 + i);

	while (ch <= 'f')
	{
		putchar (ch);
		ch++;
	}
	putchar ('\n');
	return (0);
}
