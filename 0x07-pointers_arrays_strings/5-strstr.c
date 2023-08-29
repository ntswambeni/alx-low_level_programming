#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: string to search
 * @needle: substring to find
 * Return: poiter to first char of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	if (needle[0] == '\0')
	{
		p = &haystack[0];
		return (p);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (*(haystack + i + j) == needle[j] && needle[j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			p = &haystack[i];
			return (p);
		}
	}

	return (NULL);
}
