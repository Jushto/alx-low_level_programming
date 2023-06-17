#include <stdio.h>
/**
 * main -Entry point
 * Program will pring all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
