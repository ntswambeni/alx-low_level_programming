#include "main.h"
#include <string.h>
/**
 * string_toupper - converts a string from lower to uppercase
 * @s: string to make uppercase
 * Return: string in uppercase
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		s[i] -= 32;
	}

	return (s);
}
