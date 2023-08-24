#include "main.h"

/**
 * _strncat - concatenates two strings using at most
 * n chars of the second string
 * and returns a pointer to the result
 * @dest: first param. The destination string
 * @src: last param. The string that will join the other
 * @n: number of charachters to use
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
