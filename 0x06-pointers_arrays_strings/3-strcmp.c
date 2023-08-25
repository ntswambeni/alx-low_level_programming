#include "main.h"

/**
 * _strcmp - compares two strings and return an int as result
 * @s1: first string
 * @s2: last string
 * Return: -15 if  s1 smaller. 15 if s1 is greater. 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (i < j)
		return (-15);
	else if (i > j)
		return (15);
	else
		return (0);
}
