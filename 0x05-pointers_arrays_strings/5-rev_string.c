#include "main.h"

void rev_string(char *s)
{
	char temp=s[0];
	int i = 0;
	int j;

	while (s[i] != 0)
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		temp = s [j];
		s[j] = s [i];
		s[i] = temp;
	}
}
