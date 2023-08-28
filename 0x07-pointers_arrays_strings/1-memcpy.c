#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: variable to copy to
 * @src: variable to copy from
 * @n: the number of spaces to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = src[i];

	return (dest);
}
