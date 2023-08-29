#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: prefix substring
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int numberOfBytes = 0, i, j;
	char have;

	for (i = 0; s[i] != '\0'; i++)
	{
		have = 'f';

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				have = 't';
				break;
			}
		}

		if (have != 't')
			break;

		numberOfBytes++;
	}

	return (numberOfBytes);
}
