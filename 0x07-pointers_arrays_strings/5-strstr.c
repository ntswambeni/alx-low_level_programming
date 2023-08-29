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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			p = &haystack[i];
			for (j = 1; j != '\0'; j++)
			{
				if (*(haystack + j) != needle[j])
					break;
			}
			return (p);
		}
	}

	return (NULL);
}
