#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: occurence to find
 * Return: pointer to first occurence if found. NULL if not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}

	return (NULL);
}
