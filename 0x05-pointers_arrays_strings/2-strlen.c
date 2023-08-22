#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: pointer to the string var
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
