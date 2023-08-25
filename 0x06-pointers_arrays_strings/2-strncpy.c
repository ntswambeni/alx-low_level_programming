#include "main.h"

/**
 * _strncpy - copies a strings using at most
 * n chars of the second string
 * and returns a pointer to the result
 * @dest: first param. The destination string
 * @src: last param. The string that will ibe copied
 * @n: number of charachters to use
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0' && dest[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
