#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0, size;
	char aux;

	while (s[i] != '\0')
	{
		i++;
	}
	size = i;
	for (i = 0; i < (size / 2); i++)
	{
		aux = s[i];
		s[i] = s[(size - i) - 1];
		s[(size - i) - 1] = aux;
	}
}
